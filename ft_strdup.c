/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:54:53 by javialva          #+#    #+#             */
/*   Updated: 2024/06/20 12:24:15 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*strdup;

	len = 0;
	i = 0;
	while (s[len] != '\0')
		len++;
	len += 1;
	strdup = (char *) malloc(len * sizeof(char));
	if (strdup == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		strdup[i] = s[i];
		i++;
	}
	strdup[len] = '\0';
	return (strdup);
}
