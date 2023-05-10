/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:32:40 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/09 18:44:25 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{	
	unsigned int	i;
	unsigned int	j;

	if (src == NULL)
		return (0);
  if (dstsize == 0)
    return (ft_strlen(src));
	i = 0;
	j = ft_strlen(dst);
	while (src[i] && i + j < dstsize -1 )
//  while (src[i] && j < dstsize - 1)
	{
		dst[j + i] = src[i];
		i++; 
	}
	dst[i + j] = '\0';
  return (j + ft_strlen(src));
}
/*
int	main(void)
{
	char	dst1[30] = "";
	char	dst2[30] = "";
	int		len = 10;
	printf("DIO= %s <> %li\n", dst1, ft_strlcat(dst1, "AAA", len));
	printf("ORI= %s <> %li\n", dst2, ft_strlcat(dst2, "AAA", len));
	return (0);
}*/
