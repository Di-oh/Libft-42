/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:12:53 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/23 19:56:01 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	words;
	int	character;
	int	i;

	character = 0;
	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && character == 0)
		{
			words++;
			character = 1;
		}
		else
		{
			if (s[i] == c)
				character = 0;
		}
		i++;
	}
	return (words);
}

static char **ft_free(char **ptr)
{	
	while (*ptr)
	{
		free(*ptr);
		ptr++;
	}
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char			**array;
	unsigned int	i;
	unsigned int	ini;
	int				x;
	int				num;

	x = 0;
	num = ft_count_words(s, c);
	array = malloc (sizeof(char *) * (num + 1));
	if (array)
	{
		while (s && x < num)
		{
			i = 0;
			while (s[i] == c)
				i++;
			ini = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			if (i == 0)
				i++;
			printf("caracter = %c ini = %i i = %i \n ", s[i], ini, i);
			array[x] = ft_substr(s, ini, i - ini);
			if (!array[x++])
				return(ft_free(array));
			s += i;
		}
		array[x] = NULL;
	}
	return (array);
}

int	main(void)
{
	char **prueba;
	int i = 0;
	int n = ft_count_words(" lorem   ipsum dolor     	sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse   ", ' ');

	prueba = ft_split(" lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	while (i < n)
	{
		printf("%s\n",prueba[i]);
		i++;
	}
	return (0);
}
