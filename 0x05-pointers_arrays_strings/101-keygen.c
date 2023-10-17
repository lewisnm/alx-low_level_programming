#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a key
 *
 * Return: 0 success
 */

int main(void)
{
	int key[100];
	int x, sum, y;

	sum = 0;

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		key[x] = rand() % 78;
		sum += (key[x] + '0');
		putchar(key[x] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			y = 2772 - sum - '0';
			sum += y;
			putchar(y + '0');
			break;
		}
	}
	return (0);
}
