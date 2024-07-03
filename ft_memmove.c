/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 20:43:43 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 00:51:48 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Copies n bytes from memory area src to memory area dest. The memory areas may
overlap: copying takes place as though the bytes in src are first copied int a 
temporary array that does not overlap src or dest, and the bytes are then 
copied from the temporary array to dest*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*pd;
	const char	*ps;

	pd = (char *)dest;
	ps = (const char *)src;
	if (pd > ps)
	{
		pd += n;
		ps += n;
		while (n--)
			*(--pd) = *(--ps);
	}
	else
		while (n--)
			*(pd++) = *(ps++);
	return (dest);
}

/*
int	main(void)
{
	char	str[] = "Hello world!";

	printf("Before memmove: %s\n", str);
	ft_memmove(str + 3, str, 5);
	printf("After memmove: %s", str);
	return (0);
}
*/
