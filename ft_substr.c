/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:27:18 by javialva          #+#    #+#             */
/*   Updated: 2024/06/20 13:46:09 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	iss;

	iss = 0;
	ss = (char *)malloc((len + 1) * sizeof(char));
	if (ss == NULL)
		return (NULL);
	while (iss != len)
	{
		ss[iss] = s[start];
		iss++;
		start++;
	}
	ss[iss] = '\0';
	return (ss);
}

/*Parametros 
s: String desde la que creas la substring.
start: Indice del caracter en s desde el que empezar la substring.
len: longitud maxima de la substring

Valor devuelto
Substring resultante.
NULL si falla asignacion de memoria.

Funciones autorizadas
malloc

Descripcion
Reserva con malloc(3) y devuelve una substring de la string 's'.
La substring empieza desde el indice start y tiene una long max len. */
