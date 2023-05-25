
#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	main(void)
{
//	int fd = open ("Hola.txt", O_RDWR | O_CREAT);
//	if (fd = -1)
//		return (1);
	ft_putchar_fd('c', 1);
//	close(fd);
	return (0);
}
