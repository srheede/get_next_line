/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 14:46:53 by srheede           #+#    #+#             */
/*   Updated: 2018/05/31 22:38:03 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getlen(int n)
{
	int i;

	i = 2;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n /= 10)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_getlen(n);
	j = 0;
	str = ft_memalloc(i);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		j = 1;
	}
	str[--i] = '\0';
	while (i--)
	{
		str[i] = n % 10 + '0';
		n /= 10;
	}
	if (j)
		str[0] = '-';
	return (str);
}
