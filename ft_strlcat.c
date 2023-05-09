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
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{	
	unsigned int	i;
	unsigned int	j;
	char			*dest;

	i = 0;
	dest = dst;
	if (src[i] != '\0')
		return (dstsize + ft_strlen(src));
	j = ft_strlen(dst);
	while ((j + i < (dstsize - 1)) && src[i] != '\0')
	{
		dst[j + i + 1] = src[i];
		i++;
		if (src[i] != '\0')
			return (dstsize + ft_strlen(src));
	}
	return (ft_strlen(dst) + ft_strlen(src));
}
