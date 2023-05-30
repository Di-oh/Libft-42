/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:54:01 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/29 18:15:14 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	**list;
	t_list	*nodo;

	list = lst;
	while (list)
	{
		ft_lstdelone(list, nodo->content);
		nodo->next;
	}
	free(*lst);
}
