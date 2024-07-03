/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:27:18 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 10:19:09 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Reserve (with malloc(3)) and return a substring of the string 's'.
The substring starts from the index 'start' and has a maximum length 'len'.*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	iss;

	iss = 0;
	ss = (char *)malloc((len + 1) * sizeof(char));
	if (ss == NULL)
		return (NULL);
	while (iss != len)
	{
		ss[iss] = s[start];
		iss++;
		start++;
	}
	ss[iss] = '\0';
	return (ss);
}

/*
int	main(void)
{
	const char	*str = "Hola como estas?";
	unsigned int	start = 4;
	size_t	len = 12;
	char	*substr;

	substr = ft_substr(str, start, len);
	printf("%s", substr);
	return (0);
}
*/
