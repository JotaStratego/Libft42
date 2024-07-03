/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:38:14 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 00:36:50 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Evaluates if 'c' is a digit or not.*/
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = 'a';
	b = '0';
	c = 'H';
	d = '&';
	if (ft_isdigit(a))
		printf("%c is a digit\n", a);
	else
		printf("%c isn't a digit\n", a);
	if (ft_isdigit(b))
		printf("%c is a digit\n", b);
	else
		printf("%c isn't a digit\n", b);
	if (ft_isdigit(c))
		printf("%c is a digit\n", c);
	else
		printf("%c isn't a digit\n", c);
	if (ft_isdigit(d))
		printf("%c is a digit\n", d);
	else
		printf("%c isn't a digit\n", d);
	return (0);
}
*/
