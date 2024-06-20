/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:05:42 by javialva          #+#    #+#             */
/*   Updated: 2024/06/20 13:40:47 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

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
