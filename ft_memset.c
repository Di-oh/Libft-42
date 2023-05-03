/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:20:40 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/03 16:45:27 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

void	*memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*pt;

	pt = (char *)b;
	i = 0;
	while (i < len && pt[i] != '\0')
	{
		pt[i] = c;
		i++;
	}	
	return ((void	*)pt);
}
