#include "libft.h"


char *ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*str2;
	size_t	x;
	size_t	y;
	
	str2 = (char *)s2;
	x = ft_strlen(s1);
	y = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (x + y));
	if (str == NULL)
		return (NULL);
	printf("antes del ft_strlcat\n");
	ft_strlcat(str2, s1, (x + y));
	printf("despues del ft_strlcat\n");
	return (str2);
}

int	main(void)
{
	printf("%s\n", ft_strjoin("Hola ", "Dionisia"));
	return (0);
}
