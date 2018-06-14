/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 11:23:39 by srheede           #+#    #+#             */
/*   Updated: 2018/05/31 15:54:52 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*buffer;
	int		i;

	i = 0;
	if (s && f)
	{
		buffer = ft_memalloc(ft_strlen((char *)s) + 1);
		if (!buffer)
			return (NULL);
		while (s[i] != '\0')
		{
			buffer[i] = f(i, s[i]);
			i++;
		}
		buffer[i] = '\0';
		return (buffer);
	}
	return (NULL);
}
