/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 23:59:50 by javialva          #+#    #+#             */
/*   Updated: 2024/06/17 00:55:40 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t n);

int	main(void)
{
	size_t	n = 30;
	char	dest[30] = "hola ";
	const char	*src = "mundo";
	size_t	len;

	printf("La cadena dest antes de funcion es: %s\n", dest);	
	len = ft_strlcat(dest, src, n);
	printf("La longitud de dest es: %ld\n", len);
	printf("La cadena concatenada tras la funcion es: %s", dest);
	return (0);
}
