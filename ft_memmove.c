/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:35:44 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/21 09:48:35 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*pt_src;
	char	*pt_dst;
	size_t	i;

	i = 0;
	pt_src = (char *)src;
	pt_dst = (char *)dst;
	if (pt_dst == NULL && pt_src == NULL)
		return ((void *)pt_dst);
	if (src < dst)
	{
		while (len > 0)
		{
			pt_dst[len - 1] = pt_src[len - 1];
			len--;
		}
	}
	else
	{	
		while (i++ < len)
			pt_dst[i] = pt_src[i];
	}
	return ((void *)pt_dst);
}
/*
int	main(void)
{
	char str[] = "Hola, Mundo!";
	
	printf("Antes destino vale %s \n", str);
	ft_memmove(str + 7, str, ft_strlen(str));
	printf("Despues destino vale %s \n", str);
	
        char str2[] = "Hola, Mundo!";
        char str3[] = "aaaaa";
        printf("Antes destino vale %s \n", str3);
        ft_memmove(str3, str2, 5);
        printf("Despues destino vale %s \n", str3);
        printf("Despues origen vale %s \n", str2);
	return (0);
}*/
