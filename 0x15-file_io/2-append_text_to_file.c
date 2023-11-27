#include "main.h"

/**
  * append_text_to_file - a function that appends text at the end of a file
  * @filename: pointer to the file name
  * @text_content: a string thats null terrminated
  *
  * Return: 1 on success, -1 on failure.
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, turn_wr, k;

	if (filename == NULL)
		return (-1);
	file_des = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	if (file_des < 0)
		return (-1);

	if (text_content)
	{
		k = 0;
		while (text_content[k])
			k++;

		turn_wr = write(file_des, text_content, k);
		if (turn_wr < 0)
		{
			close(file_des);
			return (-1);
		}
	}

	close(file_des);
	return (1);
}
