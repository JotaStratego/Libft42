/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 20:08:08 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 00:38:16 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Evaluates if 'c' it's printable or not*/
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	if (ft_isprint(a))
		printf("%c is printable\n", a);
	else
		printf("%c isn't printable\n", a);
	if (ft_isprint(b))
		printf("%c is printable\n", b);
	else
		printf("%c isn't printable\n", b);
	if (ft_isprint(c))
		printf("%c is printable\n", c);
	else
		printf("%c isn't printable\n", c);
	if (ft_isprint(d))
		printf("%c is printable\n", d);
	else
		printf("%c isn't printable\n", d);
	return (0);
}
*/
