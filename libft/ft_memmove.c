/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 07:32:27 by srheede           #+#    #+#             */
/*   Updated: 2018/05/31 22:10:43 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (((unsigned char *)src) < ((unsigned char *)dst))
		ft_memcpy(dst, src, len);
	else
		ft_revmemcpy(dst, src, len);
	return (dst);
}
