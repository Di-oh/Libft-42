
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	char *s = "Dionisia";
	char *b;
	
	b = ft_strdup(s);
	printf("String %s, se duplica en %s\n", s, b);
	free(b);

	return (0);
}
