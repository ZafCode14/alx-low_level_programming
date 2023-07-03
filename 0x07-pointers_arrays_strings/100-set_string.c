#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * set_string - set value of pointer to a character
 * @s: pointer to pointer to string
 * @to: pointer to string
 */
void set_string(char **s, char *to)
{
	*s = (char *) malloc((strlen(to) + 1) * sizeof(char));
	strcpy(*s, to);
}
