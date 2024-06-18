/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 10:32:58 by javialva          #+#    #+#             */
/*   Updated: 2024/06/18 20:51:13 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>
#include <stdio.h>

void	bzero(void *s, size_t n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	str[50] = "Hola mundo real";
	int	i;

	i = 0;
	printf("%s\n", str);
	bzero(str, 10);
	while ((str[i] == '\0' || str[i] != '\0') && i < 15)
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}
