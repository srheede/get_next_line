/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 00:16:46 by srheede           #+#    #+#             */
/*   Updated: 2018/06/01 13:13:42 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;

	while (*s1 && len > 0)
	{
		i = 0;
		while (s2[i] == s1[i] && s2[i] && s1[i] && i < len)
		{
			i++;
		}
		if (s2[i] == '\0')
			return ((char *)s1);
		s1++;
		len--;
	}
	return (NULL);
}
