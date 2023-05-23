/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:03:19 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/22 18:09:30 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Lo mas importante para hacer un split es contar palabras
// "hola    que tal" -> 3
// " hola  que   tal" -> 3
// "hola   que tal " -> 3
// "      " -> 0
// "" -> 0
//
// Una vez sabemos el numero de palabras podemos reservar el array de puntero + 1 para el cierre
//
// Recorro el string i voy cortando y pegando
#include "libft.h"

static int ft_count_words(char const *s, char c)
{
	int words;
	int charcater;
	int i;

	character = 0;
	words = 0;
	i = 0;
	while (s[i])
	{
		if(s[i] == c && character = 1)
		{
			words++;
			character = 0;
		}
		else
			character = 1;
	}
	return words;
}

void	ft_free(int n)
{	
	int i;
	
	i = 0;
	while (i < n)
	{
		free(i);
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	unsigned int i;
	unsigned int ini;
	size_t len;
	char	**array;
	int n_word;
	
	n_word = ft_count_words(s, c);
	i = 0;
	len = 0;

	while (s && x < n_words)
	{
		ini = i;
		while (s[i] != c)
		{	
			len++;
			i++;
		}
		array[x][0] = ft_substr(s, ini, len);
		x++;
		len = 0;
		s += i;
	}
	return array;
}


