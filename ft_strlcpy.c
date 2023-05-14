/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:14:09 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/13 11:49:21 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < (dstsize - 1) && src[i] != '\0')
	{
//		printf ("%c \n", src[i]);
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

int	main(void)
{
	const char	src[6] = "Origen";
//	const char	src2[6] = "Origen";
	char		dst[100] = "Dest";
	size_t		a;
//	char		dst2[100] = "Dest";
//	size_t		b;

	a = ft_strlcpy(dst, src, 7);
//	b = strlcpy(dst2, src2, 7);
	printf ("dest: %s \n", dst);
//	printf ("dest2: %s \n", dst2);
	printf ("nº de src: %li \n", a);
//	printf ("nº de src2: %li \n", b);
}
