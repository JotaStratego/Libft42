/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:30:51 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 00:46:37 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*compares first data size of s1 and s2*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *) s1;
	str2 = (char *) s2;
	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i] - str2[i]);
}

/*
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
*/
