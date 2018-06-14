/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 13:32:31 by srheede           #+#    #+#             */
/*   Updated: 2018/05/30 13:33:31 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	if (s1 && s2)
	{
		i = ft_strncmp((char *)s1, (char *)s2, n);
		if (i)
			return (0);
		return (1);
	}
	return (0);
}
