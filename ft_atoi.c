/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:20:28 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/17 12:36:19 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	char	*str;
	int		i;
	int		num;
	int		positive;
	
	str = (char *)nptr;
	i = 0;
	num = 0;
	positive = 0;
	if (str[i] == '-' || str[i] == '+')
	   	i++;	   
	while (str[i] != '\0')
	{
		num *= 10;
		if (str[1] == '-' || str[1] == '+')
			i++;
		if (str[i] >= '0' && str[i] <= '9')
			num = num + str[i] - '0' ;
		i++;
	}
	if (str[1] == '-')
		num -= num;
	return (num);
}

int 	main(void)
{

	printf("Resultado atoi: %i \n", atoi("123"));
	printf("Resultado mi atoi: %i \n", ft_atoi("123"));
	printf("Resultado atoi: %i \n", atoi("-123"));
	printf("Resultado mi atoi: %i \n", ft_atoi("-123"));
	return (0);
}
