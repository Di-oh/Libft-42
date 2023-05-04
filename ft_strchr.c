/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:06:50 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/04 15:57:14 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*pt;

	pt = (char *)s;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			i = 0;
			return ((char *)s);
		}	
		i++;
	}
	if (s[i] == c)
	{
		i = 0;
		return (pt);
	}
	return ("NULL");
}
