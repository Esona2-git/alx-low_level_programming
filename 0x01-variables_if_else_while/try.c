#include <stdio.h>

/** Write a program that prints all
 *
 * possible different combinations of two digits.
 */

int main(void)
{
        int x, y;

        for (x = '0'; x <= '8'; x++)
        {
                for (y = '1'; y <= '9'; y++)
                {
                        if (y >= x)
                        {
                                break;
                        }
                        else
                        {
                                putchar(x);
				putchar(y);
                                putchar( ',');
                        }
                }
        }
        putchar('\n');
        return(0);
}
