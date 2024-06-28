/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:07:50 by javialva          #+#    #+#             */
/*   Updated: 2024/06/28 13:02:47 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	test(unsigned int i, char c)
{
	(void) i;

	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int	main(void)
{
	char const *s = "Hola a todos";
	char	(*f) (unsigned int, char) = test;

	printf("%s", ft_strmapi(s, f));
	return (0);
}
