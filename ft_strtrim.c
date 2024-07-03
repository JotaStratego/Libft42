/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:34:18 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 10:16:37 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Remove all characters from the string 'set' from the beginning and from
the end of 's1', until find a character not belonging to 'set'. The
resulting string is returned with a reservation of malloc*/
#include "libft.h"

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

static int	len(const char *str)
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
	end = len(s1);
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
int	main(void)
{
	const char	*s1 = "Hola a todos";
	const char	*set = "Hol";
	char	*result;

	result = ft_strtrim(s1, set);
	printf("%s", result);
	free(result);
	return (0);
}
*/
