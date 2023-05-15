/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 13:29:48 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/14 13:34:51 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
 	char str[len];
 	char *str2;
 	size_t i;
 	size_t j;
	size_t x;

 	str[0] = 'a';
 	if (ft_strlcpy(str,(char*)big, len) != 0)
  		return (NULL);
 	str2 = (char *)little;
 	i = 0;
	x = 0;
 	j = (size_t)ft_strlen(str2);

    	if (str2[x] == '\0')
	{
		big += x;	
            	return ((char *)big);
	}
    	while (str[x] != '\0' && i < len)
    	{
  		if (ft_strncmp(str, str2, j) == 0 && str[x])
		{
			big += x;
            		return ((char *)big);
		}
  		else
		{
   			x++;
			str++;
		}
  		i++;
 	}
 	return (NULL);
}

int main(void)
{
        char *a = "que quee tal?";
        char *b = "quee";
        char *c = "que quee tal?";
        char *d = "tal?";
        char *e = "que quee tal?";
        char *f = "t";
        char *g = "que quee tal?";
        char *h = "z";
        char *i = "que quee tal?";
        char *j = "qu";
        char *k = "que quee tal?";
        char *l = "qu";
          printf("buscar %s en %s ", b, a);
      printf(" devuelve: %s \n", ft_strnstr(a, b, 12));
        printf("** Con len 12, buscar %s en %s\n", d, c);
        printf(" devuelve: %s \n\n", ft_strnstr(c, d, 12));
        printf("** Con len 1, buscar %s en %s ", f, e);
        printf(" devuelve: %s \n\n", ft_strnstr(e, f, 1));
        printf("** Con len 1, buscar %s en %s ", h, g );
        printf(" devuelve: %s \n\n", ft_strnstr(g, h, 1));
        printf("** Con len 3, buscar %s en %s ", j, i);
        printf(" devuelve: %s \n\n", ft_strnstr(i, j, 3));
        printf("buscar %s en %s ", l , k);
        printf(" devuleve: %s \n\n", ft_strnstr(k, l, 3));
        return (0);
}
