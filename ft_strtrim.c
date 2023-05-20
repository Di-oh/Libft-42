/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:26:37 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/20 18:40:27 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_findset(char const *s1, const *set)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && i < ft_strlen(set))
   	{
       	j =0;
      	while (s1[i + j] == set[j] && (i + j) < ft_strlen(set))
		{
			j++;
			if (set[j] == '\0')
               	return (i);
       	 }
       	i++;
	}
	
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int	start;
	int	j;
	int	z;
	int aux;

	j = 0;
	z = 0;
	if (!s1)
		return (ft_strdup(""));
	if (ft_strlen(s1) < ft_strlen(set))
		return (ft_strdup(""));
	start = ft_findset(s1, set) + ft_strlen(set);
	str = malloc(sizeof(char) *(ft_strlen(s1) - ft_strlen(set) + 1));
	if (str == NULL)
		return (NULL);
	str = ft_substr(s1, start + ft_strlen(set), );
	return (str);
}
/*
int	main(void)
{

	printf("%s\n", ft_strtrim("lHola", "lH"));
	return (0);
}*/
