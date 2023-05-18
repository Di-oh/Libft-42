

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	char 	*b;
	size_t	i;

	i = 0;	
	b = malloc(size * nmemb);
	if (b == NULL)
		return ((void *)b);
	while (i < size)
		b[i++] = 0;
	return ((void *)b);
}
/*
int	 main(void)
{
	char	*b;
	char	*c;

	b = (char *)ft_calloc(0,8);
	printf("%s\n", b);
	free(b);
	c = (char *)calloc(0, 8);
	printf("%s\n", c);
	free(c);
	return (0);
}
*/
