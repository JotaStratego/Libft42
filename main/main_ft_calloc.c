/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:03:01 by javialva          #+#    #+#             */
/*   Updated: 2024/06/20 11:47:57 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size);

int	main(void)
{
	int	*ptr;

	ptr = (int *) ft_calloc(20, sizeof(int));
	if (ptr == NULL)
		return (1);
	for (int i = 0; i < 20; i++)
		printf("%d", ptr[i]);
	free(ptr);
	return (0);
}
