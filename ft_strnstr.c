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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;
	
	i = 0;
	j = 0;
	x =	0;
	if (ft_strlen(needle) == 0)
		return (haystrack);
	while (haystack[j])
	{
		j = 0;
		x = i;
		while (haystack[i] == needle[i] && haystrack[i] && i < len)
		{
			j++;
			i++;
		}
		if (little[j] == '\0')
			big += x;
		i++;
	}
	if (x == 0)
		return (NULL)
	else
		return(needle);
}

int	main(void)
{
	char    a[13] = "Hola que tal?";
	char	b[4] = "Hola";
	
	printf("",);

	return (0);
}
