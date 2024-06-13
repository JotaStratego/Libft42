/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:22:53 by javialva          #+#    #+#             */
/*   Updated: 2024/06/13 20:02:50 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c);

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
