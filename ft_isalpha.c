/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:14:13 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/03 13:12:57 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <ctype.h>

int	ft_isalpha(int num)
{
	if (((num < 'a') || (num > 'z')) && ((num < 'A') || (num > 'Z')))
		return (0);
	else
		return (1);
}
/*
int	main(void)
{
	printf("el char es alphanumerico: %i\n", ft_isalpha(65));
	printf("el char es alphanumerico: %i\n", isalpha(65));

	return (0);
}*/
