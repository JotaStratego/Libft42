/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:04:13 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 01:06:51 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Returns a pointer to the first occurrence of the char 'c' in the string 's'*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	return (NULL);
}

/*
int	main(void)
{
	const char	*str = "Hola que tal";
	char	ch = 'q';
	char	nch = 'b';
	char	null = '\0';
	char	*result;

	result = strchr(str, ch);
	if (result != NULL)
		printf("'%c' en posición: %ld\n", ch, result - str);
	else
		printf("El caracter '%c' no se encontró\n", ch);
	result = strchr(str, nch);
	if (result != NULL)
		printf("'%c' en posición: %ld\n", nch, result - str);
	else
		printf("El caracter '%c' no se encontró\n", nch);
	result = strchr(str, null);
	if (result != NULL)
		printf("El caracter '\\0' en posición: %ld\n", result - str);
	else
		printf("El caracter '\\0' no se encontró");
	return (0);
}
*/
