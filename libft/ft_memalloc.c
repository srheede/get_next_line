/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 12:39:27 by srheede           #+#    #+#             */
/*   Updated: 2018/05/31 15:47:01 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *buffer;

	buffer = (void *)malloc(size);
	if (buffer == NULL)
		return (NULL);
	ft_bzero(buffer, size);
	return (buffer);
}
