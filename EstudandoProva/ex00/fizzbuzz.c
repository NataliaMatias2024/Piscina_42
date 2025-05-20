#include <unistd.h>

int putnumber(int n)
{
	unsigned int n;

	if (n > 9)
	{
		putnumber(n / 10);
		write(1, &"0123456789"[i%10], 1);
	}
}

int main(void)
{
	int i;

	
	while (i <= 100)
	{
		putnumber(i);
		i++;
	}
}