/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 10:28:45 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 00:27:05 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Gives null value to a string*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	str[50] = "Hola mundo real";
	int	i;

	i = 0;
	printf("%s\n", str);
	ft_bzero(str, 10);
	while ((str[i] == '\0' || str[i] != '\0') && i < 15)
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}
*/
