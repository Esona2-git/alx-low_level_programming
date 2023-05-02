#include "main.h"
/**
* This report, by its very length, defends itself against the risk of being read
* 
* Returns the length of the string
*/

int _strlen(char *s)
{
        int longi = 0;

        while (*s != '\0')
        {
                longi++;
                s++;
        }
        return (longi);
}:
