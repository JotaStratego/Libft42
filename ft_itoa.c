/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:39:09 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 00:40:41 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Returns a string that represents the int value. Returns NULL if memory fails*/
#include "libft.h"

int	len(int n)
{
	int	tokens;

	tokens = 0;
	if (n < 0)
	{
		tokens++;
		n *= -1;
	}
	while (n > 9)
	{
		n /= 10;
		tokens++;
	}
	if (n < 10)
		tokens++;
	return (tokens);
}

int	nums(int n)
{
	int	nums;

	nums = 0;
	if (n < 0)
		n *= -1;
	while (n > 9)
	{
		n /= 10;
		nums++;
	}
	if (n < 10)
		nums++;
	return (nums);
}

char	int_to_char(int n)
{
	char	num;

	num = (char)n + 48;
	return (num);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		times;
	int		numbers;

	times = len(n);
	numbers = nums(n);
	string = (char *)malloc((times + 1) * (sizeof(char)));
	if (string == NULL)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		string[0] = '-';
	}
	string[times] = '\0';
	string[--times] = int_to_char(n % 10);
	while (--times >= 0 && numbers-- > 1)
	{
		n /= 10;
		string[times] = int_to_char(n % 10);
	}
	return (string);
}
/*
int	main(void)
{
	int n = 485635;
	int a = -58746;
	char	*str1 = ft_itoa(n);
	char	*str2 = ft_itoa(a);
	int x = 0;
	int z = 0;

	while (str1[x] != '\0')
	{
		printf("%c", str1[x]);
		x++;
	}
	printf("\n");
	while (str2[z] != '\0')
	{
		printf("%c", str2[z]);
		z++;
	}
	return (0);
}
*/
