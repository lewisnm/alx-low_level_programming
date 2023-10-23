#include "main.h"

/**
  * print_chessboard - main function
  *
  * @a: function parameter declared
  */

void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y = 0;

	for (; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
