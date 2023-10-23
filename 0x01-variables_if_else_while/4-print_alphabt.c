#include <stdio.h>
/**
  * main - Program that prints all the alphabets except q and e in lowercase
  * Return: Always 0
  **/
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; <= 'z'; letter++)
	{
	if (letter != 'e' && letter != 'q')
	putchar letter;
	}
	putchar('\n');
	return (0);
}
