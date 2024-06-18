/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:45:57 by javialva          #+#    #+#             */
/*   Updated: 2024/06/18 21:02:12 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	const char	*s1 = "Hello World";
	const char	*s2 = "Hello Men";
	int	result1;
	int	result2;

	result1 = ft_memcmp(s1, s2, 5);
	result2 = ft_memcmp(s1, s2, 9);
	printf("Result 1 = %d\n", result1);
	printf("Result 2 = %d", result2);
	return (0);
}
