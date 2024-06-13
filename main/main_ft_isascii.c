/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 20:10:33 by javialva          #+#    #+#             */
/*   Updated: 2024/06/13 20:20:58 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isascii(int c);

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
	if (ft_isascii(a))
		printf("%c is an ascii char\n", a);
	else
		printf("%c isn't ascii char\n", a);
	if (ft_isascii(b))
		printf("%c is an ascii char\n", b);
	else
		printf("%c isn't ascii char\n", b);
	if (ft_isascii(c))
		printf("%c is an ascii char\n", c);
	else
		printf("%c isn't ascii char\n", c);
	if (ft_isascii(d))
		printf("%c is an ascii char\n", d);
	else
		printf("%c isn't ascii char\n", d);
	return (0);
}
