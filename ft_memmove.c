/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:35:44 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/09 11:08:55 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*pt_src;
	char	*pt_dst;

	pt_src = (char *)src;
	pt_dst = (char *)dst;
	if (src < dst)
	{
		while (len > 0)
		{
			pt_dst[len - 1] = pt_src[len - 1];
			len--;
		}
		dst = (void *)pt_dst;
	}
	else
		dst = ft_memcpy(dst, src, len);
	return (dst);
}
