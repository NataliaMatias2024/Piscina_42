#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int i;
	char c;

	i = 9;
	while (i >= 0)
	{
		c = i + '0';
		write(1, &c, 1);
		i--;
	}
}