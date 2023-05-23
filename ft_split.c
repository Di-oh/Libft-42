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
        int character;
        int i;

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
                        if (s[i] == c )
                            character = 0;
              i++;
        }
        return words;
}

void	ft_free(int n, char *ptr)
{	
	int i;
	
	i = 0;
	while (i < n)
	{
		free(ptr);
		i++;
	}
}

//char	**ft_split(char const *s, char c)
void	ft_split(char const *s, char c)
{
//	char **array;
	unsigned int i;
        unsigned int ini;
        int x;
        int n_word;

        n_word = ft_count_words(s, c);
        i = 0;
        x = 0;

        while (s && x < n_word)
        {
                ini = i;
                while (s[i] != c && s[i] != '\0')
                        i++;
                if (i > 0)
                {
//		    array += x;	
//                  array[x] = ft_substr(s, ini, i);
                  printf("%s \n",ft_substr(s, ini, i));
		  x++;
                }
                else 
                  i++;
//		if (x > n_word)
//			array[x] = NULL;
                s += i;
                i = 0;
        }
	
//	return (array);
}

int	main(void)
{
/*	char **prueba;
	int i = 0;
	int n = ft_count_words("Hola que tal", ' ');

	prueba = ft_split("Hola que tal", ' ');*/
	ft_split("  Hola que tal", ' ');
/*	while (i < n)
	{
		printf("%s",prueba[i]);
		i++;
	}*/
	return (0);
}


