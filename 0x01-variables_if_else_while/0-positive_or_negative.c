#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Get a ramdom number and print the number
 * and if it positive, negative, or zero
 * Return: 0
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		if(n > 0)
			printf("is positive\n");
		else if(n > 0)
			printf("is zero\n");
		else
			printf("is negative\n");
	return (0);
}
