#include "libft.h"

static int ft_count_digits(int n)
{
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void ft_putchar(char c)
{
	write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
	int i;
	

	i = ft_count_digits(n);
	if (n < 0)
		ft_putchar('-');
		n = -n;
	else 
	{
		while ( i > 0)
		{
			n = n % 10;
			write(fd, n + '0', 1)
			i--;
		}
	}				
}
