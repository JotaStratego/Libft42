/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 01:46:49 by javialva          #+#    #+#             */
/*   Updated: 2024/06/17 09:58:55 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_toupper(int c);

int	main(void)
{
	char	c;

	c = 'c';
	write(1, "Antes de toupper: ", 18);
	write(1, &c, 1);
	c = ft_toupper(c);
	write(1, "\n", 1);
	write(1, "Despues de toupper: ", 20);
	write(1, &c, 1);
	return (0);
}
