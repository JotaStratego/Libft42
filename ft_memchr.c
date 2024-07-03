/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:49:48 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 00:44:23 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Finds first ocurrence of byte 'c' in str up to the maximum size*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

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
/*
int	main(void)
{
	const char *s = "Hola como estas";
	char	c = 's';
	char	u = 'u';
	char	*result1;
	char	*result2;

	result1 = ft_memchr(s, c, strlen(s));
	result2 = ft_memchr(s, u, strlen(s));
	printf("La cadena resultante tras la letra %c es: %s\n", c, result1);
	printf("La cadena resultante tras la letra %c es: %s\n", c, result2);
	return (0);
}
*/
