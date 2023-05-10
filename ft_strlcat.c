/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:32:40 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/10 11:59:52 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{	
	unsigned int	i;
	unsigned int	j;
	unsigned int	x;
	size_t			ret;

	i = 0;
	j = ft_strlen(dst);
	x = ft_strlen(src);
	if (j < dstsize)
		ret = (x + j);
	else
		ret = (x + dstsize);
	while (src[i] && j + 1 < dstsize)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (ret);
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
