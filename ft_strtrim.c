
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int	i;
	int	j;
	int	z;

	i = 0;
	j = 0;
	z = 0;
	str = malloc(sizeof(char) *(ft_strlen(s1) - ft_strlen(set) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		printf("valor 1 de s[i] : %c\n", s1[i]);
	
		j = 0;
		while (s1[i] == set[j] && set[j] != '\0')
		{
			printf("valor de s[i] : %c\n", s1[i]);
			printf("valor de s[j] : %c\n", set[j]);
			i++;
			j++;
		}
		str[z] = s1[i]; 
		i++;
		z++;
	}
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", ft_strtrim("lHola", "l"));
	return (0);
}*/
