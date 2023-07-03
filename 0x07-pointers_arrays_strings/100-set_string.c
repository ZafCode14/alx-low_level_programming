#include <stdio.h>
#include <stdlib.h>
/**
 * set_string - set string
 * @s: pointer to pointer
 * @to: pointer to string
 */
void set_string(char **s, char *to)
{
	*s = (char*)malloc((strlen(to) + 1) + sizeof(char));
	strcpy(*s, to);
}
