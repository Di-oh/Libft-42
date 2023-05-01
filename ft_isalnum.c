int	ft_isalpha(char *str);
int	ft_isdigit(char *str);

int	ft_isalnum(char	*str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{	
		if ((str[i] < 'a' || str[i] > 'z') &&
		(str[i] < '0' || str[i] > '9'))
			return (0);
		i++;
	}
	return (1);
}
