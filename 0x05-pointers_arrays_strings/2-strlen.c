#include "main.h"
#include <stdio.h>

int _strlen(char *s)
{
	char *s
	int len;

	for (len = 0; *s[len] != '\0'; ++len);
	printf("%d\n", len);

	return 0;
}
