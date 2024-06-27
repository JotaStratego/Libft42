/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 01:37:39 by javialva          #+#    #+#             */
/*   Updated: 2024/06/28 01:41:46 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int n);

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
