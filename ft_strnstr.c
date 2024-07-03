/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:03:53 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 10:10:26 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Locate a substring in a string. Returns: If little is an empty string, big 
is returned; if little occurs nowhere in big, NULL is returned; otherwise
a pointer to the first char of the first occurrense of little is returned*/
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (little[i] == '\0')
		return ((char *) big);
	while (i < len)
	{
		if (big[i] - little[0] == 0)
			return ((char *) big + i);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "o";
	char *ptr;

	ptr = ft_strnstr(largestring, smallstring, strlen(largestring));
	if (ptr != NULL)
		printf("%s\n", ptr);
	else
		printf("Substring not found\n");
	return (0);
}
*/
