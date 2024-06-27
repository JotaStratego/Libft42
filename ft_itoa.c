/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:39:09 by javialva          #+#    #+#             */
/*   Updated: 2024/06/28 01:47:53 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	len(int n)
{
	int	tokens;

	tokens = 0;
	if (n < 0)
	{
		tokens++;
		n *= -1;
	}
	while (n > 9)
	{
		n /= 10;
		tokens++;
	}
	if (n < 10)
		tokens++;
	return (tokens);
}

int	nums(int n)
{
	int	nums;

	nums = 0;
	if (n < 0)
		n *= -1;
	while (n > 9)
	{
		n /= 10;
		nums++;
	}
	if (n < 10)
		nums++;
	return (nums);
}

char	int_to_char(int n)
{
	char	num;

	num = (char)n + 48;
	return (num);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		times;
	int		numbers;

	times = len(n);
	numbers = nums(n);
	string = (char *)malloc((times + 1) * (sizeof(char)));
	if (string == NULL)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		string[0] = '-';
	}
	string[times] = '\0';
	string[--times] = int_to_char(n % 10);
	while (--times >= 0 && numbers-- > 1)
	{
		n /= 10;
		string[times] = int_to_char(n % 10);
	}
	return (string);
}
/*
* Parametros:
* n: el entero a convertir.
* 
* Valor devuelto:
* La string que representa el número.
* NULL si falla memoria. 
* 
* Funciones autorizadas: Malloc.
*
* Descripción:
* Utilizando malloc genera una string que represente el valor entero recibido
* como argumento. Hay que gestionar los números negativos. */
