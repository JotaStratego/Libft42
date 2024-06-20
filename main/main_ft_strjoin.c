/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:11:48 by javialva          #+#    #+#             */
/*   Updated: 2024/06/20 17:14:27 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(const char *s1, const char *s2);

int	main(void)
{
	const char	*s1 = "Hola mundo, ";
	const char	*s2 = "adios mundo.";
	char	*sjoin;

	sjoin = ft_strjoin(s1, s2);
	printf("%s", sjoin);
	free(sjoin);
	return (0);
}
