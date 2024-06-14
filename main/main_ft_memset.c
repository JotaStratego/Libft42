/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 08:28:38 by javialva          #+#    #+#             */
/*   Updated: 2024/06/14 08:35:37 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n);

int	main(void)
{
	char	s[50] = "Hello world";
	int	c = '*';
	size_t	n = 5;

	ft_memset(s, c, n);
	printf("%s", s);
	return (0);
}
