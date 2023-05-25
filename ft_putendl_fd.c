#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	int i;
	int len;

	len = ft_strlen(s);
	while (i < len)
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, '\n',1);
}
