#ifndef FILE_NAME_H
#define FILE_NAME_H
#include <stdio.h>

#define FILE_NAME __FILE__

int main()
{
	printf("The file name is %s\n," __FILE__);
	return (0);
}

#endif
