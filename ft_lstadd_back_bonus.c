/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:24:27 by javialva          #+#    #+#             */
/*   Updated: 2024/07/04 23:27:01 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Add 'new' node in the end of list 'lst'*/
#include "libft.h"

void	ft_lsadd_back(t_list **lst, t_list *new)
{
	if (*lst)
		(ft_lstlast(*lst))->next = new;
	else
		*lst = new;
}
