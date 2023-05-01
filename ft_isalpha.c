
//#include <stdio.h>
int	ft_isalpha(char	*str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') &&
	      	(str[i] < 'A' || str[i] > 'Z')) 
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
	printf("La frase tiene caracteres solo %i \n", ft_isalpha("LAholaaaa"));
	return (0);
}*/
