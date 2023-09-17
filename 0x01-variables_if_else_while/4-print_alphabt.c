#include <stdio.h>
/**
 *main - edededed
 *
 *Return:dejnedn
 */
int main(void)
{
        char chark[] = "abcdefghigklmnopqrstuvwxyz";
        int i;

        for (i = 0;i <26 ; i++)
        {
                if ( chark[i] == 'e' || chark[i] == 'q' )
                {
                        continue;
                }
                else
                putchar(chark[i]);
        }

	putchar('\n');
        return (0);
}
