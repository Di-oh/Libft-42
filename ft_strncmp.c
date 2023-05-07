#include "libft.h"
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int 	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		printf("%d \n", s1[i]);
		printf("%d \n", s2[i]);
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);	
		i++;	
	}
	if (i > n)
		return (s1[i] - s2[i]);
	return (0);
}

int	main(void)
{
	printf("ft_strncmp %d\n", ft_strncmp("Hola","Hola ", 4));
	printf("ft_strncmp %d\n", ft_strncmp("Hola","Hola" , 4));
	printf("ft_strncmp %d\n", ft_strncmp("Hola","Hola", 3));
	printf("ft_strncmp %d\n", ft_strncmp("Hola", "Holi", 4));
	printf("ft_strncmp %d\n", ft_strncmp(" ", "\0", 5));
	printf("ft_strncmp %d\n", ft_strncmp("hola", "hola", 5));
	return (0);
}
