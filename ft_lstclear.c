/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:31:24 by javialva          #+#    #+#             */
/*   Updated: 2024/07/04 23:34:46 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Delete and free the given 'lst' node and all consecutive of that node, using
the function 'del' and free(). In the end, the pointer to the list must be 
NULL*/
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	while (*lst)
	{
		aux = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(aux);
	}
}
