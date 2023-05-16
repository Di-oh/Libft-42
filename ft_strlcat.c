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
#include <string.h>

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

/*int	main(void)
{
	char	dst1[30] = "";
	int		len = 10;
	int		len2 = 7;
	int		len3 = 11;

	printf("**** Caso de dest sin datos, long del dest = 30, src = AAA y len = 10");
	printf("dest vacio sin cambio= %s\n", dst1);
	printf("retorno de la funcion  strlcat  %li \n", ft_strlcat(dst1, "AAA", len));
	printf("dest estaba vacio con cambio da= %s\n", dst1);
	printf("*************************************************\n\n");
	char	dst3[5] = "";
	printf("**** Caso de dest sin datos, long del dest = 5, src = AAAbbbb y len = 10\n");
	printf("dest sin cambio: %s\n", dst3);
	printf("retorno de la funcion strlcat %li \n", ft_strlcat(dst3, "AAAbbbb", len));
	printf("dest con cambio: %s\n", dst3);
	printf("*************************************************\n\n");
	char	dst4[] = "Hola ";
	printf("**** Caso de dest = Hola , src = Angel y len = 7\n");
	printf("dest sin cambio: %s\n", dst4);
	printf("retorno de la funcion ft_strlcat %li \n", ft_strlcat(dst4, "Angel", len2));
	printf("dest con cambio: %s\n", dst4);
	printf("*************************************************\n\n");
	char	dst5[] = "Hola ";
	printf("**** Caso de dest = Hola , src = Angel y len = 11\n");
	printf("dest sin cambio: %s\n", dst5);
	printf("retorno de la funcion ft_strlcat %li \n", ft_strlcat(dst5, "Angel", len3));
	printf("dest con cambio: %s\n", dst5);*/
/*	char	dst6[30] = "";
	printf("**** Caso de dest sin datos, long del dest = 30, src = AAA y len = 10");
	printf("dest vacio sin cambio= %s\n", dst6);
	printf("retorno de la funcion  strlcat  %li \n", strlcat(dst6, "AAA", len));
	printf("dest estaba vacio con cambio da= %s\n", dst6);
	printf("*************************************************\n\n");
	char	dst7[5] = "";
	printf("**** Caso de dest sin datos, long del dest = 5, src = AAAbbbb y len = 10\n");
	printf("dest sin cambio: %s\n", dst7);
	printf("retorno de la funcion strlcat %li \n", strlcat(dst7, "AAAbbbb", len));
	printf("dest con cambio: %s\n", dst7);
	printf("*************************************************\n\n");
	char	dst8[] = "Hola ";
	printf("**** Caso de dest = Hola , src = Angel y len = 7\n");
	printf("dest sin cambio: %s\n", dst8);
	printf("retorno de la funcion ft_strlcat %li \n", strlcat(dst8, "Angel", len2));
	printf("dest con cambio: %s\n", dst8);
	printf("*************************************************\n\n");
	char	dst9[] = "Hola ";
	printf("**** Caso de dest = Hola , src = Angel y len = 11\n");
	printf("dest sin cambio: %s\n", dst9);
	printf("retorno de la funcion ft_strlcat %li \n", strlcat(dst9, "Angel", len3));
	printf("dest con cambio: %s\n", dst9);
*/
/*	return (0);
}*/
