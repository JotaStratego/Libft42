/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:55:26 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 10:07:12 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Compares n bytes of s1 and s2. Returns an integer less than, equal to, or 
greater than zero if s1 is found, respectively, to be less than, to match or
be greater than s2.*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (!(s1[i] == s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
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
*/
