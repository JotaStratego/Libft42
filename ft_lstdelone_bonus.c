/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:27:31 by javialva          #+#    #+#             */
/*   Updated: 2024/07/04 23:30:47 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Takes an 'lst' node as a parameter and releases the memory of the content
using the 'del' function given as a parameter, in addition to releasing the
node. The 'next' memory should not be freed. */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst);
}
