/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:07:58 by javialva          #+#    #+#             */
/*   Updated: 2024/06/20 12:24:47 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s);

int	main(void)
{
	const char	*s = "Hello World and amazing people of Spain";
	char	*dup;

	dup = ft_strdup(s);
	printf("%s\n", dup);
	free(dup);
	return (0);
}
