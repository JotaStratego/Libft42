/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 10:10:53 by javialva          #+#    #+#             */
/*   Updated: 2024/06/21 10:23:00 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	const char	*s1 = "Hola a todos";
	const char	*set = "Hol";
	char	*result;

	result = ft_strtrim(s1, set);
	printf("%s", result);
	free(result);
	return (0);
}
