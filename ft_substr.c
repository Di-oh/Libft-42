

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	unsigned int	len_s;
	unsigned int	i;
	size_t	j;

	len_s = ft_strlen(s);
	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (len));
	if (str == NULL)
		return (NULL);
	while ( i < len_s && i != (start - 1))
		i++;
	while (j < len)
		str[j++] = s[i++];
	return (str);
}

int	main(void)
{	
	char	*a = "Hola";

	printf("%s \n", ft_substr(a,1,6));
	free(a);
	return (0);
}
