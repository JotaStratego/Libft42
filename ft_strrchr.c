/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:03:49 by javialva          #+#    #+#             */
/*   Updated: 2024/06/26 20:45:26 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
