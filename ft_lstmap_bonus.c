/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:38:55 by javialva          #+#    #+#             */
/*   Updated: 2024/07/04 23:47:45 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Iterates 'lst' list and applies function 'f' to content of each node. 
Creates a new list of the correct and successive application of the function
'f' over each node. The 'del' function is used to delete the contents of a 
node, if necessary.*/
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	newlist = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, new);
		lst = lst->next;
	}
	return (newlist);
}
