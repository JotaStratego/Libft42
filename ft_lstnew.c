/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:38:09 by javialva          #+#    #+#             */
/*   Updated: 2024/07/04 23:10:36 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*creates a new node*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
