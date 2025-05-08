#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int i;
	char c;
	char upper_c;

	c = 'a';
	i = 0;
	while (c <= 'z')
	{
		if (i % 2 == 0)
		{
			write(1, &c, 1);
		}
		else 
		{
			upper_c = c - 32;
			write(1, &upper_c, 1);
		}
		i++;
		c++;
	}
	write(1, "\n", 1);
	return 0;
}