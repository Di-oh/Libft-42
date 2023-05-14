/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:24:49 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/14 14:00:03 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <string.h>

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t  i;
        size_t  j;
        
        i = 0;
        j = 0;
        while (big[i] != '\0' && i < len)
        {
          j = 0;
          if (big[i] == little[j] && i < len)
          {
            printf("big[i] : %c\n", big[i]);
            
            while (big[i + j] == little[j] && (i + j) < len)
            {
              printf("big[i +j ] : %c\n", big[i + j]);
              printf("little[j] : %c\n", little[j]);
              j++;
              if (big[i + j] == '\0' && little[j] == '\0')
                return ((char *)&big[i + j]);
            }
          }
          i++;
        }
        return (NULL);
}

int     main(void)
{
//        char    *a = "que quee tal?";
//        char    *b = "quee";
        char    *c = "que quee tal?";
        char    *d = "tal?";
       char    *e = "que quee tal?";
        char    *f = "t";
        char    *g = "que quee tal?";
        char    *h = "z";
        char    *i = "que quee tal?";
        char    *j = "qu";
//        char    *k = "que quee tal?";
//        char    *l = "qu";

//	    printf("buscar %s en %s ", b, a);
//      printf(" devuelve: %s \n", ft_strnstr(a, b, 12));
        printf("** Con len 12, buscar %s en %s\n", d, c);
        printf(" devuelve: %s \n\n", ft_strnstr(c, d, 12));
        printf("** Con len 1, buscar %s en %s ", f, e);
        printf(" devuelve: %s \n\n", ft_strnstr(e, f, 1));
        printf("** Con len 1, buscar %s en %s ", h, g );
        printf(" devuelve: %s \n\n", ft_strnstr(g, h, 1));
        printf("** Con len 3, buscar %s en %s ", j, i);
        printf(" devuelve: %s \n\n", ft_strnstr(i, j, 3));
//        printf("buscar %s en %s ", l , k);
//        printf(" devuleve: %s \n\n", strnstr(k, l, 3));
        return (0);

}
