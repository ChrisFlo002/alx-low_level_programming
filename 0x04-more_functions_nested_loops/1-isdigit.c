#include "main.h"

/*
*_isdigit - cheks is a digit
*takes an int as param
*return 1 if true, 0 if false
*/
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	return (0);
}
