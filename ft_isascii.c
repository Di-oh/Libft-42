/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:46:46 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/03 15:59:49 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c = 48;
	int 	d = 128;

	printf("Mirar si el caracter %c, es ascii : %i\n", c, ft_isascii(c));	
	printf("Mirar si el caracter %c, es ascii : %i\n", d, ft_isascii(d));	
	return (0);
}*/
