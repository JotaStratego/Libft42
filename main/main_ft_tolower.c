/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 01:50:30 by javialva          #+#    #+#             */
/*   Updated: 2024/06/17 10:00:58 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_tolower(int c);

int	main(void)
{
	char	c;

	c = 'C';
	write(1, "Antes de tolower: ", 18);
	write(1, &c, 1);
	c = ft_tolower(c);
	write(1, "\n", 1);
	write(1, "Despues de tolower: ", 20);
	write(1, &c, 1);
	return (0);
}

