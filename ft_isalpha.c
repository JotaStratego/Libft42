/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:15:11 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 00:33:55 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Evaluate if c is alphabet or not.*/
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
	if (ft_isalpha(a))
		printf("%c is alphabetical\n", a);
	else
		printf("%c isn't alphabetical\n", a);
	if (ft_isalpha(b))
		printf("%c is alphabetical\n", b);
	else
		printf("%c isn't alphabetical\n", b);
	if (ft_isalpha(c))
		printf("%c is alphabetical\n", c);
	else
		printf("%c isn't alphabetical\n", c);
	if (ft_isalpha(d))
		printf("%c is alphabetical\n", d);
	else
		printf("%c isn't alphabetical\n", d);
	return (0);
}
*/
