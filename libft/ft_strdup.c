/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 20:38:17 by srheede           #+#    #+#             */
/*   Updated: 2018/05/31 16:04:59 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char *dst;

	dst = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dst)
		ft_strcpy(dst, src);
	return (dst);
}
