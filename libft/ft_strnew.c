/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 13:00:43 by srheede           #+#    #+#             */
/*   Updated: 2018/05/31 15:46:41 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *buffer;

	buffer = (char *)malloc(size + 1);
	if (buffer == NULL)
		return (NULL);
	ft_memset(buffer, '\0', size + 1);
	return (buffer);
}
