/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:25:28 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 10:03:41 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*Assigns dinamic memory to a string that performs an 'f' operation on each
char from the string 's'*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*str;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	str = (char *)malloc((len + 1) * (sizeof(char)));
	if (str == NULL)
		return (NULL);
	if (f == NULL)
	{
		ft_strlcpy(str, s, len + 1);
		return (str);
	}
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	test(unsigned int i, char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int	main(void)
{
	char const *s = "Hola a todos";
	char	(*f) (unsigned int, char) = test;

	printf("%s", ft_strmapi(s, f));
	return (0);
}

*/
