#include "main.h"

/**
* _isalpha - checks for alphabetic character
*
* @c: parameter for function
*
*
* Return: 1 if c is alphabet and 0 if not
*/


int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}