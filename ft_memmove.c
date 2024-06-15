/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 20:43:43 by javialva          #+#    #+#             */
/*   Updated: 2024/06/15 12:19:32 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*pd;
	const char	*ps;

	*pd = (char *)dest;
	*ps = (const char *)src;
	if (pd == ps || n == 0)
		return (pd);
