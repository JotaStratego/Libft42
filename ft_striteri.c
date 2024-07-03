/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 13:23:30 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 01:13:55 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Applies the function f in every char of string 's'*/
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/*
void	mayus(unsigned int i, char* s)
{
	if (i == 0)
	{
		if (*s >= 97 && *s <= 122)
			*s -= 32;
	}
}

int	main(int argc, char **argv)
{
	void	(*f) (unsigned int, char*) = mayus;

	ft_striteri(argv[1], f);
	printf("%s", argv[1]);
	return (0);
}
*/
