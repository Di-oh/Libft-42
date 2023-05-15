/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:13:11 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/03 13:11:18 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int num)
{
/*	if (ft_isalpha(num) || ft_isdigit(num))
		return (1);
	return (0);*/
	return (ft_isalpha(num) || ft_isdigit(num));
}

int	main(void)
{
	printf("%i\n", ft_isalnum(48));
	printf("%i\n", ft_isalnum(112));
	printf("%i\n", ft_isalnum(124));
	return (0);
}
