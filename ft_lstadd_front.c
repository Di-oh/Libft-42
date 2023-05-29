/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:00:23 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/28 11:23:57 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}

int main(void)
{ 
	t_list *list1 = ft_lstnew("Hola");
	ft_lstadd_front(*list1, ft_lstnew("Nueva"));
	while (list1)
	{
		printf ("%s", (char *)list1->content);
			list1 = list1->next;
	}
	return (0);
}
