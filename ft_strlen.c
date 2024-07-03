/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 20:24:57 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 11:04:46 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Returns length of a string.*/
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
int	main(void)
{
	char	*str = "Hola como estas";
	int	i;

	i = ft_strlen(str);
	printf("'%s' tiene %d caracteres.", str, i);
	return (0);
}
*/
