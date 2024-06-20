/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:34:18 by javialva          #+#    #+#             */
/*   Updated: 2024/06/20 18:03:00 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	

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
