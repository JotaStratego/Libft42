/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 23:59:00 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 09:31:32 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Concatenate strings. Return the initial length of dest plus the length of
src.*/
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	lend;
	size_t	lens;

	i = 0;
	lend = 0;
	lens = 0;
	while (dest[lend] != '\0')
		lend++;
	while (src[lens] != '\0')
		lens++;
	if (n <= lend)
		return (lend + lens);
	while (src[i] != '\0' && i < (n - lend - 1))
	{
		dest[lend + i] = src[i];
		i++;
	}
	dest[lend + i] = '\0';
	return (lend + lens);
}

/*
int	main(void)
{
	size_t	n = 30;
	char	dest[30] = "hola ";
	const char	*src = "mundo";
	size_t	len;

	printf("La cadena dest antes de funcion es: %s\n", dest);	
	len = ft_strlcat(dest, src, n);
	printf("La longitud de dest es: %ld\n", len);
	printf("La cadena concatenada tras la funcion es: %s", dest);
	return (0);
}

*/
