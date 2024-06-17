/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:09:59 by javialva          #+#    #+#             */
/*   Updated: 2024/06/17 10:48:35 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*strchr(const char *s, int c);

int	main(void)
{
	const char	*str = "Hola que tal";
	char	ch = 'q';
	char	nch = 'b';
	char	null = '\0';
	char	*result;

	result = strchr(str, ch);
	if (result != NULL)
		printf("El caracter '%c' se encontro en la cadena en la posición: %ld\n", ch, result - str);
	else
		printf("El caracter '%c' no se encontró en la cadena\n", ch);
	result = strchr(str, nch);
	if (result != NULL)
		printf("El caracter '%c' se encontro en la cadena en la posición: %ld\n", nch, result - str);
	else
		printf("El caracter '%c' no se encontró en la cadena\n", nch);
	result = strchr(str, null);
	if (result != NULL)
		printf("El caracter '\\0' se encontro en la cadena en la posición: %ld\n", result - str);
	else
		printf("El caracter '\\0' no se encontró en la cadena");
	return (0);
}
