#include "main.h"

/**
 * _islower - checking for lowercase character
 * @c: The characters to be checked
 * Return: 1 for the lowercase characters or 0 for anything else
 */

int _islower(int c)

{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
