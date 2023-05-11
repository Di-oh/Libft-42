/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:24:49 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/10 15:54:29 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
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
		while (haystack[i] == needle[i] i < len)
		{
			i++;
		}
		
	}
	if (x == 0)
		return (NULL)
	else
		 
		return(needle);

}
