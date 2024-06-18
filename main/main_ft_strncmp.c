/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:26:59 by javialva          #+#    #+#             */
/*   Updated: 2024/06/18 20:44:58 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	char	s1[] = "Holas como estas";
	char	s2[] = "Holaz como eztaz";
	int	result1;
	int	result2;

	result1 = ft_strncmp(s1, s2, 6);
	result2 = ft_strncmp(s1, s2, 3);
	printf("Result 1 tras ft_strncmp es: %d\n", result1);
	printf("Result 2 tras ft_strncmp es: %d", result2);
	return (0);
}
