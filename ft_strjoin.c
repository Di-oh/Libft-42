#include "libft.h"


char *ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	size_t	x;
	size_t	y;
	
	x = ft_strlen(s1);
	y = ft_strlen(s2);
	str1 = (char *)malloc(sizeof(char) * (x + y + 1));
	if (str1 == NULL)
		return (NULL);
	ft_strlcpy(str1, s1, (x + 1));
	ft_strlcat(str1, s2, (x + y + 1));
	return (str1);
}

int	main(void)
{
	char *b;
	char *c;

	b = ft_strjoin("Hola", "Dionisia");
	c = ft_strjoin("", "Dionisia");
	printf("%s\n", b);
	free(b);
	printf("%s\n", c);
	free(c);
	return (0);
}
