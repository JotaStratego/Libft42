/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:46:02 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 01:02:01 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Splits a string in substrings with a delimitador*/
#include "libft.h"

static int	make_malloc(char **vect, size_t index, size_t len)
{
	size_t	i;

	i = 0;
	vect[index] = malloc(len);
	if (NULL == vect[index])
	{
		while (i < index)
			free(vect[i++]);
		free(vect);
		return (1);
	}
	return (0);
}

static int	ft_vects(char **vect, char const *s, char delimitador)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == delimitador && *s)
			s++;
		while (*s != delimitador && *s)
		{
			len++;
			s++;
		}
		if (len)
		{
			if (make_malloc(vect, i, len + 1))
				return (1);
			ft_strlcpy(vect[i], s - len, len + 1);
		}
		i++;
	}
	return (0);
}

static size_t	count_tokens(char const *s, char delimitador)
{
	size_t	token;
	size_t	check;

	token = 0;
	while (*s)
	{
		check = 0;
		while (*s == delimitador && *s)
			s++;
		while (*s != delimitador && *s)
		{
			if (check == 0)
			{
				token++;
				check = 1;
			}
			s++;
		}
	}
	return (token);
}

char	**ft_split(char const *s, char c)
{
	size_t	token;
	char	**vect;

	if (s == NULL)
		return (NULL);
	token = count_tokens(s, c);
	vect = (char **)malloc((token + 1) * (sizeof(char *)));
	if (vect == NULL)
		return (NULL);
	vect[token] = NULL;
	if (ft_vects(vect, s, c))
		return (NULL);
	return (vect);
}

/*
int	main(void)
{
	const char	*s = "  Hola a todo el mundo!";
	char	c = ' ';
	char	**array;
	int	i = 0;

	array = ft_split(s, c);
	while (array[i] != NULL)
	{
		printf("%s\n", array[i]);
		i++;
	}
	return (0);
}
*/
