/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:44:19 by javialva          #+#    #+#             */
/*   Updated: 2024/06/26 20:40:11 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total_size;
	size_t			i;
	void			*ptr;
	unsigned char	*p;

	total_size = nmemb * size;
	i = 0;
	if (total_size == 0 || total_size > (size_t) - 1)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	p = (unsigned char *) ptr;
	while (i < total_size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
