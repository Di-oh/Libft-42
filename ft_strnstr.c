/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:24:49 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/11 18:11:16 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	x;
	char		*str;
	
	str = (char *)haystack;
	i = 0;
	j = 0;
	x = 0;
	if (ft_strlen(needle) == 0)
		return (str);
	while (haystack[i] && j < (len - 1))
	{		
		j = 0;
		while (haystack[i] == needle[j] && haystack[i] && j < (len-1))
		{
			if (j == 0)
				x = i;
			j++;
			i++;
		}
		i++;
	}
	if (j > (len -1))
	{
		str += x;
       		return (str);	
	}else
		return (NULL);
}

int	main(void)
{
	char    a[13] = "Hola que tal?";
	char	b[4] = "Hola";
	
	printf("%s \n", a);
	printf("%s \n", ft_strnstr(a, b, 4));
	printf("%s \n", a);

	return (0);
}
#include <string.h>

int     ft_strncmp(const char *s1, const char *s2, int n)
{
        unsigned int    i;

        i = 0;
        while (s1[i] != '\0' && s2[i] != '\0' && i < n)
        {
                if (s1[i] != s2[i])
                        return ((unsigned char)s1[i] - (unsigned char)s2[i]);
                i++;
        }
        if (i < n)
                return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        return (0);
}

char    *ft_strnstr(const char *haystack, const char *needle, int len)
{
        unsigned int    i;
        unsigned int    j;
        unsigned int    x;
        char            *str;

        str = (char *)haystack;
        i = 0;
        j = 0;
        x = 0;
        if (!needle[i])
                return (str);
        while (haystack[i])
        {
                j = 0;
                x = i;
                while (haystack[i] == needle[j] && haystack[i] && j < (len-1))
                {
                  if (ft_strncmp(haystack[i], needle[j], len) == 0)
                      return (str = str + x);
                  j++;
                  i++;
                }
                i++;
        }
}

int     main(void)
{
        char    a[14] = "que quee tal?";
        char    b[4] = "quee";

        printf("%s \n", a);
        printf("%s \n", ft_strnstr(a, b, 4));
        printf("%s \n", a);
        return (0);
}
