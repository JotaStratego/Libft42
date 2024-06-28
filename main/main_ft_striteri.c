/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 13:34:39 by javialva          #+#    #+#             */
/*   Updated: 2024/06/28 13:52:37 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

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
