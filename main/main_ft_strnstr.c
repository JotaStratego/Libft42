/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 19:20:01 by javialva          #+#    #+#             */
/*   Updated: 2024/06/19 19:33:06 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);

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
