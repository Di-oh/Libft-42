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
	int	i;
	int 	num;
	char	sign;
	
	str = (char *)nptr;
	i = 0;
	num = 0;
	sign = 0;
	while (str[i] == ' ')
	   	i++;	
     	if (str[i] == '-')
		sign = 1;	
	while (str[i] != '\0' && str[i] != '\f' && str[i] != '\n' && str[i] != '\r' && str[i] != '\t' && str[i] != '\v' && str[i] != ' ')
	{	
		num *= 10;
		if (str[i] >= '0' && str[i] <= '9')
			num = num + str[i] - '0' ;
		i++;
	}
	if (sign == 1)
		num = -num;
	return (num);
}

int 	main(void)
{

	printf("Resultado atoi: %i \n", atoi("123"));
	printf("Resultado mi atoi: %i \n", ft_atoi("123"));
	printf("Resultado atoi: %i \n", atoi("-123"));
	printf("Resultado mi atoi: %i \n", ft_atoi("-123"));
	printf("Resultado atoi: %i \n", atoi("+123"));
	printf("Resultado mi atoi: %i \n", ft_atoi("+123"));
	printf("Resultado atoi: %i \n", atoi(" aaaa"));
	printf("Resultado mi atoi: %i \n", ft_atoi(" aaaa"));
	printf("Resultado atoi: %i \n", atoi("-aaa"));
	printf("Resultado mi atoi: %i \n", ft_atoi("-aaa"));
	printf("Resultado atoi: %i \n", atoi("   -123 12123"));
	printf("Resultado mi atoi: %i \n", ft_atoi("   -123 12123"));
	printf("Resultado atoi: %i \n", atoi("   +-123 12123"));
	printf("Resultado mi atoi: %i \n", ft_atoi("   +-123 12123"));
	return (0);
}
