#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
*/

void print_alphabet(void)
{
        char alpha = 'a';

        for (; alpha <= 'z' ; )
        {
        _putchar(alpha);
        alpha++;
        }

        _putchar('\n');
}
