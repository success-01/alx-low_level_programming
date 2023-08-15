#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int main(int a, int b, int c)
{
	int largest;

	if (a >= b && b >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}

int main(void) 
{
	int a, b, c;

	printf("Enter three integers: ");
	scanf("%d %d %d", &a, &b, &c);

	int result = largest_number(a, b, c);
	printf("The largest number is: %d\n", result);

	return 0;
}
