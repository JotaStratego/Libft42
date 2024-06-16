/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 12:01:50 by javialva          #+#    #+#             */
/*   Updated: 2024/06/16 22:51:20 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main(void)
{
	char	str[] = "Hello world!";

	printf("Before memmove: %s\n", str);
	ft_memmove(str + 3, str, 5);
	printf("After memmove: %s", str);
	return (0);
}
