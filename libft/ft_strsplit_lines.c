/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_lines.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 09:49:44 by srheede           #+#    #+#             */
/*   Updated: 2018/06/13 17:40:51 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_split(char const *s, char **arr)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '\n')
		{
			arr[j] = ft_strsub(s, i, ft_strlen_c(&s[i], '\n'));
			i = i + ft_strlen_c(&s[i], '\n');
			j++;
		}
		else if (s[i] == '\n')
		{
			arr[j] = ft_strsub(s, 0, 0);
			j++;
		}
		i++;
	}
	return (j);
}

char		**ft_strsplit_lines(char const *s)
{
	int		j;
	char	**arr;

	if (!s)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * ft_line_count(s) + 1);
	if (!arr)
		return (NULL);
	j = ft_split(s, arr);
	if (!j)
		arr[0] = ft_strsub(s, 0, 0);
	arr[j] = NULL;
	return (arr);
}
