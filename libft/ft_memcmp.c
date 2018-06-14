/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 03:05:33 by srheede           #+#    #+#             */
/*   Updated: 2018/05/26 15:01:51 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *buffer1;
	unsigned char *buffer2;

	buffer1 = (unsigned char *)s1;
	buffer2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*buffer1 == *buffer2 && --n > 0)
	{
		buffer1++;
		buffer2++;
	}
	return (*buffer1 - *buffer2);
}
