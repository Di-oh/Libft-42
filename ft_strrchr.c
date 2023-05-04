/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:17:56 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/04 18:24:43 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (s[i] == (char)c)
	{
		s += i;
		return ((char *)s);
	}	
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			s += i;
			return ((char *)s);
		}
		i--;
	}
	return (NULL);
}
