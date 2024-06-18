/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:18:58 by javialva          #+#    #+#             */
/*   Updated: 2024/06/18 20:27:46 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

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
