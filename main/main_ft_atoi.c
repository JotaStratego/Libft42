/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 23:47:13 by javialva          #+#    #+#             */
/*   Updated: 2024/06/19 23:57:41 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *nptr);

int	main(void)
{
	const char	*s1 = "123";
	const char	*s2 = "-1235446542";
	const char	*s3 = "   567";
	const char	*s4 = "467abc";
	const char	*s5 = "ave";

	int	n1 = ft_atoi(s1);
	int	n2 = ft_atoi(s2);
	int	n3 = ft_atoi(s3);
	int	n4 = ft_atoi(s4);
	int	n5 = ft_atoi(s5);

	printf("%d\n", n1);
	printf("%d\n", n2);
	printf("%d\n", n3);
	printf("%d\n", n4);
	printf("%d\n", n5);
	return (0);
}
