/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:01:50 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/24 13:43:46 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_itoa(int n)
{
	char *str;
	long unsigned num;
	
	i = 12;
	x = 0;
	str = malloc(size_of(char) * 12);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[x] = '-';
		n = n * -1;
		i--;
		x++;
	}
	while (x < i) 
	{
		n = n % 10;
		str[i] = n + '0';
		x++;
		i--;
	} 
}

int	main(void)
{
	return (0);
}
