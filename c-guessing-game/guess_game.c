#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_NUMBER 1
#define MAX_NUMber 10

int main(void)
{
	int n, i; /*k = 0;*/
	srand(time(0));
	n = (rand() % 10) + 1;

	do {
		printf("take a guess kele: ");
		scanf("%d", &i);

		if (n > i)
			printf("Guess too low! try again\n");
		else if (n < i)
			printf("Guess too high! try again\n");
		else if (i < 1 || i > 10)
			printf("Input a valid number of 1 to 10\n");
		else
		{
			printf("Congrate!! you got it right\n");
		}
	} while (i != n);
	
	return (0);
}
