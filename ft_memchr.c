/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:49:48 by javialva          #+#    #+#             */
/*   Updated: 2024/06/18 20:28:17 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t		i;

	i = 0;
	str = (char *) s;
	while (i < n)
	{
		if (str[i] == (char) c)
			return (str + i);
		i++;
	}
	return (NULL);
}
