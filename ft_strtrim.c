
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int	x;
	int	y; 
	int	i;

	i = 0;
	x = ft_strlen(s1);
	y = ft_strlen(set);
	str = malloc(sizeof(char) *(x - y + 1));
	if (str == NULL)
		return (NULL);
	while (s1)
	{
		while (i < z)
		{
			str[i] = s1[i];
			i++;
		}
		i  = i + y;
		s1 += i;
	}
	return (str);
}
