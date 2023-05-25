/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:04:21 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/25 13:37:05 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int len;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}

void	ft_pasar(unsigned int n, char *a)
{
	printf("%c \n", *a);
	if (n % 2 == 0)
		*a = 32;
}

int	main(void)
{
	char	*str;

	str = "Holaa";
	ft_striteri(str, &ft_pasar);
	printf("%s", str);
	return (0);
}
