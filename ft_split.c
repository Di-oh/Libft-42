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

char	**ft_split(char const *s, char c)
{
	int letra;
	int palabra;	
	int separador;

	palabra = 0;
	letra = 1;
	separador = 0
	while (s[i] != c)
	{
		if (s[i] ==  c && letra == 1)
		{
			if separador == 0
			{
				separador = 1;
				letra = 0;
				palabra++;
			}
		}
		else 
		{
			letra = 1;
			separador = 0;
		}
	}
}
