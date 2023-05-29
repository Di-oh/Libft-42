/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:57:10 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/27 17:46:03 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct s_list	*list;

	list = malloc(sizeof(struct s_list));
	if (list == NULL)
		return (list);
	list -> content = content;
	list -> next = NULL;
	return (list);
}
/*
int	main(void)
{
	t_list *list_1 = ft_lstnew("Hola");
	printf("%s",(char *)list_1->content);

	return (0);
}*/
