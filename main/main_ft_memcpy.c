/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:04:02 by javialva          #+#    #+#             */
/*   Updated: 2024/06/14 20:30:34 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	char	*src = "Hola a todos";
	char	dest[20];
	size_t	i = 0;
	size_t	n = 4;
	while (src[i] != '\0')
	{
		write(1, &src[i], 1);
		i++;
	}
	write(1, "\n", 1);
	ft_memcpy(dest, src, n);
	i = 0;
	while (i < n)
	{
		write(1, &dest[i], 1);
		i++;
	}
	return (0);
}
