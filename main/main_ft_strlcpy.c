/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 22:53:35 by javialva          #+#    #+#             */
/*   Updated: 2024/06/16 23:57:30 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t n);

int	main(void)
{
	char	*src = "hola que tal";
	char	dest[30];
	size_t	len = 7;
	size_t	n = ft_strlcpy(dest, src, len);
	printf("%s tiene %ld caracteres\n", src, n);
	printf("%s", dest);
	return (0);
}
