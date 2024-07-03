/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 20:06:32 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 00:35:39 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Evaluates if 'c' it's included in ASCII or not.*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
*/
