/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 01:39:51 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 10:22:35 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Converts lowercase letters to uppercase.*/
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	char	c;

	c = 'c';
	write(1, "Antes de toupper: ", 18);
	write(1, &c, 1);
	c = ft_toupper(c);
	write(1, "\n", 1);
	write(1, "Despues de toupper: ", 20);
	write(1, &c, 1);
	return (0);
}
*/
