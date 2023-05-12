/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:24:49 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/11 18:11:16 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
/*
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	x;
	char		*str;
	char		*str2;
	
	str = haystack;
	str2 = needle;
	i = 0;
	j = 0;
	x = 0;
	if (ft_strlen(needle) == 0)
		return (str);
	while (haystack[j])
	{		
		j = 0;
		x = i;
		while (haystack[i] == needle[i] && haystack[i] && x >= len)
		{
			j++;
			i++;
			x++;
		}
		i++;
	}
	if (x < i)
	{
		str += x;
       		return (str);	
	}
	if (x == 0)
		return (NULL);
	else
		return (str2);
}

int	main(void)
{
	char    a[13] = "Hola que tal?";
	char	b[4] = "Hola";
	
	printf("%s \n", a);
	printf("%s \n", ft_strnstr(a, b, 4));
	printf("%s \n", a);

	return (0);
}*/
