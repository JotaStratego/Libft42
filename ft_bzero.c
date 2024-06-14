/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 10:28:45 by javialva          #+#    #+#             */
/*   Updated: 2024/06/14 10:43:35 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t		i;

	ptr = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
