
#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		write(fd, &s[i], 1);
		i++;
	}
}

