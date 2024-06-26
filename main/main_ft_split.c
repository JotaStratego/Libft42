/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:38:14 by javialva          #+#    #+#             */
/*   Updated: 2024/06/26 21:52:35 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c);

int	main(void)
{
	const char	*s = "  Hola a todo el mundo!";
	char	c = ' ';
	char	**array;
	int	i = 0;

	array = ft_split(s, c);
	while (array[i] != NULL)
	{
		printf("%s\n", array[i]);
		i++;
	}
	return (0);
}
