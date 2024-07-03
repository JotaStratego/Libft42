/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:03:49 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 10:14:38 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Locate char in string. Returns a pointer to the last occurrence of the char
'c' in string 's'. Returns NULL if the char 'c' isn't found.*/
#include "libft.h"

static int	ft_count(const char *s, int c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if ((char)c == s[i])
			count++;
		i++;
	}
	return (count);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	count;

	i = 0;
	count = ft_count(s, c);
	if (count > 0)
	{
		while (s[i] != '\0')
		{
			if ((char)c == s[i])
				count--;
			if (count == 0)
				return ((char *)(s + i));
			i++;
		}
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	return (NULL);
}

/*
int	main(void)
{
	const char	*str = "Hola que tal";
	char	ch = 'a';
	char	nch = 'b';
	char	null = '\0';
	char	*result;

	result = ft_strrchr(str, ch);
	if (result != NULL)
		printf("Ultima posicion '%c'en: %ld\n", ch, result - str);
	else
		printf("'%c' no se encontró en la cadena\n", ch);
	result = ft_strrchr(str, nch);
	if (result != NULL)
		printf("'%c' se encontro en: %ld\n", nch, result - str);
	else
		printf("'%c' no se encontró en la cadena\n", nch);
	result = ft_strrchr(str, null);
	if (result != NULL)
		printf("'\\0' se encontro en posición: %ld\n", result - str);
	else
		printf("'\\0' no se encontró en la cadena");
	return (0);
}
*/
