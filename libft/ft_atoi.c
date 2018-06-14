/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 17:12:08 by srheede           #+#    #+#             */
/*   Updated: 2018/05/31 23:18:07 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_sign(char c)
{
	if (c == '-')
		return (-1);
	if (c == '+')
		return (1);
	return (0);
}

static size_t	ft_result(const char *str)
{
	size_t			i;
	unsigned int	digit;

	i = 0;
	while (str)
	{
		digit = *str - '0';
		if (digit > 9)
			break ;
		i = (10 * i) + digit;
		str++;
	}
	return (i);
}

int				ft_atoi(const char *str)
{
	int		i;
	size_t	j;

	while (ft_isspace(*str))
		str++;
	i = ft_sign(*str);
	if (i)
		str++;
	j = ft_result(str);
	if (j == 2147483648 && i == -1)
		return (-2147483648);
	if (i == -1)
		j *= -1;
	return (j);
}
