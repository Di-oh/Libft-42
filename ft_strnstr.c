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
#include <string.h>

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
        char            *str;
	char		*str2;

        str = (char *)big;
	str2 = (char *)little;
        if (str2[0] == '\0')
                return (str);
        while (*str)
        {		
		if (ft_strncmp(str, str2, len) == 0 && str)
                  	return (str);
		else
			str++;
	}
	return (NULL);
}

int     main(void)
{
        char    *a = "que quee tal?";
        char    *b = "quee";
        char    *c = "que quee tal?";
        char    *d = "tal?";
        char    *e = "que quee tal?";
        char    *f = "t";
        char    *g = "que quee tal?";
        char    *h = "z";
        char    *i = "que quee tal?";
        char    *j = "qu";
        char    *k = "que quee tal?";
        char    *l = "qu";

	printf("%s \n", a);
        printf("%s \n", ft_strnstr(a, b, 4));
        printf("%s \n", a);
        printf("%s \n", c);
        printf("%s \n", ft_strnstr(c, d, 4));
        printf("%s \n", c);
        printf("%s \n", e);
        printf("%s \n", ft_strnstr(e, f, 1));
        printf("%s \n", e);
        printf("%s \n", g);
        printf("%s \n", ft_strnstr(g, h, 1));
        printf("%s \n", g);
        printf("%s \n", i);
        printf("%s \n", ft_strnstr(i, j, 3));
        printf("%s \n", k);
        printf("%s \n", strnstr(k, l, 3));
        printf("%s \n", k);
	return (0);
}
