/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:34:18 by javialva          #+#    #+#             */
/*   Updated: 2024/06/21 10:21:56 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static int	ft_removing_chars(char s, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (s == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		start;
	int		end;
	int		i;

	start = 0;
	while (s1[start] && ft_removing_chars(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_removing_chars(s1[end - 1], set))
		end--;
	result = (char *)malloc((end - start) * sizeof(s1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (end > start)
		result[i++] = s1[start++];
	result[i] = '\0';
	return (result);
}
/*
Parametros:
-s1: La string que debe ser recortada.
-set: Los caracteres a eliminar de la string.
Valor devuelto:
String recortada. Null si falla reserva de memoria.
Funciones autorizadas: Malloc-
Descripción:
Elimina todos los caracteres de la string set desde el principio 
y desde el final de s1, hasta encontrar un caracter no perteneciente a
set. La string resultante se devuelve con una reserva de malloc(3).
*/
