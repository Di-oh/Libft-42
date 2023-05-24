/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:01:50 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/24 19:15:47 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count_num(int i)
{
	int n;
	n = 0;

	if (i == 0)
		n = 1;
	else
	{
		if (i < 0)
	  	 	i = i * -1;
		 while (i != 0)
		 {
			 i = i / 10;
		 	n++;
		 }
	} 		 
	return (n);
}

char *ft_itoa(int n)
{
	char	*str;
	int		num;
	int		r;
	int		x;

	x = 0;
	if (n < 0)
	    num = ft_count_num(n) + 2;
	else
		num = ft_count_num(n) + 1;
	str = ft_calloc(num, sizeof(char));
	if (n == -2147483648)
		return ("-2147483648");
	else
	{
	 	if (n == 0)
			 str[0] = n % 10 + '0';
	 	else 
	 	{
			if (n < 0)
			{	
				n = n * -1;
				str[0] = '-';
				x = 1;
			}
			num = num - 2;
			while (num >= x)
			{
				r = n % 10;
				n = n / 10;
				str[num] =  r + '0';
				num--;
			}
	 	}
	}
	return (str);
}

int	main(void)
{
	char *str;

	str = ft_itoa(-2147483648);
	printf("%s \n", str);
	free(str);
	return (0);

}
