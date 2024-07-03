/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:26:18 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 01:16:00 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Joins two string in one.*/
#include "libft.h"

static int	total_len(int i, int len, const char *s1, const char *s2)
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
/*
int	main(void)
{
	const char	*s1 = "Hola mundo, ";
	const char	*s2 = "adios mundo.";
	char	*sjoin;

	sjoin = ft_strjoin(s1, s2);
	printf("%s", sjoin);
	free(sjoin);
	return (0);
}
*/
