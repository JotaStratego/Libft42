/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:35:23 by javialva          #+#    #+#             */
/*   Updated: 2024/07/04 23:38:17 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Iterates 'lst' list and applies the function 'f' in the content of each node*/
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
