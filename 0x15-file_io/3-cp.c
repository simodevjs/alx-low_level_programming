#include "main.h"
#include <stdio.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

void check_args(int argc);
int open_file_from(char *filename);
int open_file_to(char *filename);
void copy_file(int fd_from, int fd_to, char *file_from, char *file_to);
void close_files(int fd_from, int fd_to);

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, exit with code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	check_args(argc);

	fd_from = open_file_from(argv[1]);
	fd_to = open_file_to(argv[2]);

	copy_file(fd_from, fd_to, argv[1], argv[2]);

	close_files(fd_from, fd_to);

	return (0);
}

/**
 * check_args - checks the number of arguments
 * @argc: number of arguments
 */
void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * open_file_from - opens the source file for reading
 * @filename: name of the source file
 * Return: file descriptor of the source file
 */
int open_file_from(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	return (fd);
}

/**
 * open_file_to - opens the destination file for writing
 * @filename: name of the destination file
 * Return: file descriptor of the destination file
 */
int open_file_to(char *filename)
{
	int fd;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (fd);
}

/**
 * copy_file - copies the content of the source file to the destination file
 * @fd_from: file descriptor of the source file
 * @fd_to: file descriptor of the destination file
 * @file_from: name of the source file
 * @file_to: name of the destination file
 */
void copy_file(int fd_from, int fd_to, char *file_from, char *file_to)
{
	ssize_t n_read, n_written;
	char buffer[BUFFER_SIZE];

	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		n_written = write(fd_to, buffer, n_read);
		if (n_written == -1 || n_written != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
}

/**
 * close_files - closes the source and destination files
 * @fd_from: file descriptor of the source file
 * @fd_to: file descriptor of the destination file
 */
void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		close(fd_to);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}
