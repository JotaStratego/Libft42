/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 19:34:28 by javialva          #+#    #+#             */
/*   Updated: 2024/06/19 20:26:46 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	chartoint(char c)
{
	int	r;

	r = c - '0';
	return (r);
}

int	ft_atoi(const char *nptr)
{
	int	result;
	int	i;
	int	sign;
	int	counts;

	i = 0;
	counts = 0;
	while (nptr[i] == ' ') //ignore space before numbers
		i++;
	if (nptr[i] == '-')
	{
		sign = 1; //true minus sign
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
	}
	return (0);
}
