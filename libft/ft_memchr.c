/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 02:37:10 by srheede           #+#    #+#             */
/*   Updated: 2018/05/25 13:41:41 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	unsigned char *buffer;
	unsigned char d;

	buffer = (unsigned char *)s;
	d = (unsigned char)c;
	while (n-- > 0)
	{
		if (d == *buffer)
			return ((void *)buffer);
		buffer++;
	}
	return (0);
}
