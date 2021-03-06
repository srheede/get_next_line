/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 13:20:58 by srheede           #+#    #+#             */
/*   Updated: 2018/05/30 13:31:14 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;

	if (s1 && s2)
	{
		i = ft_strcmp((char *)s1, (char *)s2);
		if (i)
			return (0);
		return (1);
	}
	return (0);
}
