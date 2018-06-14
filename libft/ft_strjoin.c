/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 14:04:43 by srheede           #+#    #+#             */
/*   Updated: 2018/05/30 14:25:54 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *buffer;

	if (s1 && s2)
	{
		buffer = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (!buffer)
			return (NULL);
		ft_strcpy(buffer, s1);
		ft_strcat(buffer, s2);
		return (buffer);
	}
	return (NULL);
}
