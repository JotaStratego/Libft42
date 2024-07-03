/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:54:53 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 01:11:14 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Assigns dinamic memory to a string of 's' and duplicate it*/
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*strdup;

	len = 0;
	i = 0;
	while (s[len] != '\0')
		len++;
	strdup = (char *) malloc((len + 1) * sizeof(char));
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

/*
int	main(void)
{
	const char	*s = "Hello World and amazing people of Spain";
	char	*dup;

	dup = ft_strdup(s);
	printf("%s\n", dup);
	free(dup);
	return (0);
}
*/
