/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 22:53:14 by javialva          #+#    #+#             */
/*   Updated: 2024/07/03 09:34:08 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Copies n bytes src to dest. Returns a copy of src in dest. */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (n == 0)
		return (len);
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/*
int	main(void)
{
	char	*src = "hola que tal";
	char	dest[30];
	size_t	len = 7;
	size_t	n = ft_strlcpy(dest, src, len);
	printf("%s tiene %ld caracteres\n", src, n);
	printf("%s", dest);
	return (0);
}
*/
