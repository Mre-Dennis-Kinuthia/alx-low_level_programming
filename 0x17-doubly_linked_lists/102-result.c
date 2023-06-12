#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int is_palindrome(int num);
void bubble_sort(int array[], int count);

/**
 * main - program starts here
 *
 * Return: Always 0
 */

int main(void)
{
	int product = 1, result = 0;
	int i, j, count = 0;
	int array[2048];

	for (i = 100; i < 1000; i++)
	{
		for (j = i + 1; j < 1000; j++)
		{
			product = i * j;
			result = is_palindrome(product);
			if (result == 1)
			{
				array[count] = product;
				count++;
			}
		}
	}
	printf("Count: %d\n", count);
       	bubble_sort(array, count);
	printf("The largest palindrome is %d\n", array[count - 1]);

	return (0);
}


/**
 * is_palindrome - checks if an integer is a palindrome
 * @num: integer
 *
 * Return: 1 if integer is a palindrome, 0 otherwise
 */

int is_palindrome(int num)
{
	int len = 0, i;
	char number[6];

	sprintf(number, "%d", num);
	len = strlen(number);
	len--;

	for (i = 0; i <= len; i++)
	{
		if (number[i] != number[len])
			return (0);
		len--;
	}
	return (1);
}

/**
 * bubble_sort - sorts an array in ascending order
 * @array: array to be sorted
 *
 * Return: nothing
 */

void bubble_sort(int array[], int count)
{
	int j = 0, i = count;
	int temp = 0;

	i--;

	while (i > 0)
	{
		j = 0;

		while (j < i)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			j++;
		}
		i--;
	}

	for (j = 0; j < count; j++)
	   printf("Array[%d]: %d\n", j, array[j]);
}
