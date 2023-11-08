#include "main.h"
/**
 * _islower - this print function that checks for lowercase character
 * @c: character that check lowercase
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
