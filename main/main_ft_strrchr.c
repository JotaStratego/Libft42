/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:11:30 by javialva          #+#    #+#             */
/*   Updated: 2024/06/17 11:20:49 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

char	*ft_strrchr(const char *s, int c);

int	main(void)
{
	const char	*str = "Hola que tal";
	char	ch = 'a';
	char	nch = 'b';
	char	null = '\0';
	char	*result;

	result = ft_strrchr(str, ch);
	if (result != NULL)
		printf("La ultima posicion del caracter '%c' se encontro en: %ld\n", ch, result - str);
	else
		printf("El caracter '%c' no se encontró en la cadena\n", ch);
	result = ft_strrchr(str, nch);
	if (result != NULL)
		printf("La última posición del caracter '%c' se encontro en: %ld\n", nch, result - str);
	else
		printf("El caracter '%c' no se encontró en la cadena\n", nch);
	result = ft_strrchr(str, null);
	if (result != NULL)
		printf("El caracter '\\0' se encontro en la cadena en la posición: %ld\n", result - str);
	else
		printf("El caracter '\\0' no se encontró en la cadena");
	return (0);
}

