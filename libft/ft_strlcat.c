/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 07:57:26 by srheede           #+#    #+#             */
/*   Updated: 2018/05/31 15:48:57 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	int				k;

	i = ft_strlen(src) + dstsize;
	j = ft_strlen(src) + ft_strlen(dst);
	if (i <= j)
		return (i);
	i -= j + 1;
	k = ft_strlen(dst);
	while (i-- && *src)
		dst[k++] = *src++;
	dst[k] = '\0';
	return (j);
}
