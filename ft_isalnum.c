/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:46:27 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 00:32:30 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Evaluate if c is num or not*/
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
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
	if (ft_isalnum(a))
		printf("%c is alphanumeric\n", a);
	else
		printf("%c isn't alphanumeric\n", a);
	if (ft_isalnum(b))
		printf("%c is alphanumeric\n", b);
	else
		printf("%c isn't alphanumeric\n", b);
	if (ft_isalnum(c))
		printf("%c is alphanumeric\n", c);
	else
		printf("%c isn't alphanumeric\n", c);
	if (ft_isalnum(d))
		printf("%c is alphanumeric\n", d);
	else
		printf("%c isn't alphanumeric\n", d);
	return (0);
}
*/
