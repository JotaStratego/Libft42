/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 11:58:10 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 00:48:56 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*copy first size values of 'str' to 'dest'*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*ptrsrc;
	unsigned char		*ptrdest;

	i = 0;
	ptrsrc = (const unsigned char *)src;
	ptrdest = (unsigned char *)dest;
	while (i < n)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	return (ptrdest);
}

/*
int	main(void)
{
	char	*src = "Hola a todos";
	char	dest[20];
	size_t	i = 0;
	size_t	n = 4;
	while (src[i] != '\0')
	{
		write(1, &src[i], 1);
		i++;
	}
	write(1, "\n", 1);
	ft_memcpy(dest, src, n);
	i = 0;
	while (i < n)
	{
		write(1, &dest[i], 1);
		i++;
	}
	return (0);
}
*/
