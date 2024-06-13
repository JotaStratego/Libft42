/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:41:12 by javialva          #+#    #+#             */
/*   Updated: 2024/06/13 20:03:13 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c);

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

