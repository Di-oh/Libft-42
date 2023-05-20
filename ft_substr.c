/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:01:57 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/20 16:17:27 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	unsigned int	len_s;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (len > len_s + 1)
		len = len_s - start;
	if (len_s <= start)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	s += start;
	while (i < len)
	{
		str[i] = s[i]; 
		i++;
	}
	str[i] = '\0';
//	ft_strlcpy(str, s , len + 1);
	return (str);
}
/*
int	main(void)
{	
	char	*a = "Hola";
	char	*b;
	
	b = ft_substr(a, 1, 2);
	printf("%s \n", b);
	free(b);
	return (0);
}*/
