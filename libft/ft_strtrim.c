/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 20:40:01 by srheede           #+#    #+#             */
/*   Updated: 2018/06/01 11:01:00 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*buffer;

	if (s)
	{
		i = 0;
		j = ft_strlen(s) - 1;
		while (ft_isspace(s[i]) && s[i] != '\0')
			i++;
		while (ft_isspace(s[j]) && j > 0)
			j--;
		j = j - i + 1;
		if (j <= 0)
			return (ft_strsub(s, 0, 0));
		buffer = ft_strsub(s, i, j);
		return (buffer);
	}
	return (NULL);
}
