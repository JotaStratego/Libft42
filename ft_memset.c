/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 20:43:33 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 00:56:41 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Fills the first n bytes of the memory area pointed to by 's' with the 
constant byte 'c'*/
#include "libft.h"

void	ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
}

/*
int	main(void)
{
	char	s[50] = "Hello world";
	int	c = '*';
	size_t	n = 5;

	ft_memset(s, c, n);
	printf("%s", s);
	return (0);
}
*/
