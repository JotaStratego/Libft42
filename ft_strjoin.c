/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:26:18 by javialva          #+#    #+#             */
/*   Updated: 2024/06/20 17:21:07 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	total_len(int i, int len, const char *s1, const char *s2)
{
	while (s1[len] != '\0')
		len++;
	while (s2[i] != '\0')
		i++;
	return (len + i + 1);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		len;
	char	*result;

	len = total_len(0, 0, s1, s2);
	result = (char *)malloc((len) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	len = 0;
	while (s2[len] != '\0')
	{
		result[i + len] = s2[len];
		len++;
	}
	result[i + len + 1] = '\0';
	return (result);
}
/* Parametros
-s1: La primera string
-s2: La string a añadir a s1

Valor devuelto 
-La nueva string
-NULL si falla la reserva de memoria

Funciones autorizadas
malloc

Descripción
Reserva (con malloc(3)) y devuelve una nueva string formada por 
la concatenación de 's1' y 's2'. */
