#include "main.h"
/**
*  _isalpha - Shows 1 if the input is a
* letter Another cases, shows 0
*
* @c : character to check
*
* Return:0 or 1
*/
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
return (1);
else
return (0);
}
