/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:32:40 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/09 13:38:10 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{	
	unsigned int	i;
	unsigned int	j;
	char			*dest;

	i = 0;
	dest = dst;
	if (src[i] != '\0')
		return (dstsize + strlen(src));
	j = strlen(dst);
	while ((j + i < (dstsize - 1)) && src[i] != '\0')
	{
		dst[j + i] = src[i];
		i++;
		j++;
		if (src[i] != '\0')
			return (dstsize + strlen(src));
	}
	return (strlen(dest) + strlen(src));
}

int	main(void)
{
	printf(" %li\n", ft_strlcat("Hola", "Adios",5));
	return (0);
}
