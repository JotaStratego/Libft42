/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 11:58:10 by javialva          #+#    #+#             */
/*   Updated: 2024/06/14 12:17:41 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	const unsigned char	*ptrsrc;
	unsigned char	*ptrdest;

	i = 0;
	ptrsrc = (const unsigned char*)src;
	ptrdest = (unsigned char*)dest;
	while (i < n)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	return (ptrdest);
}
