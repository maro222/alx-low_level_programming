#include <stdio.h>

/**
 * main - print name's program
 * @args: input
 * @argv: input
 * Return: return integer
 *
 * */

int main (int args,char const *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++) 
		printf("%s\n",argv[i]);
	return (0);
}
