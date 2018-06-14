/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 10:30:35 by srheede           #+#    #+#             */
/*   Updated: 2018/06/13 17:03:25 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_read_buffer(const int fd)
{
	int		i;
	char	*buffer;
	char	*buffer_read;
	char	*tmp;

	i = 1;
	while (i != 0)
	{
		buffer_read = ft_strnew(BUFF_SIZE);
		i = read(fd, buffer_read, BUFF_SIZE);
		if (i == -1)
			return (NULL);
		tmp = ft_strjoin(buffer, buffer_read);
		free(buffer_read);
		free(buffer);
		buffer = tmp;
	}
	return (buffer);
}

int			get_next_line(const int fd, char **line)
{
	char		*buffer;
	static char	***arr;

	if (fd < 0 || read(fd, NULL, 0))
		return (-1);
	if (!arr)
		arr = ft_memalloc(1000);
	buffer = ft_strnew(BUFF_SIZE);
	if (!arr[fd])
	{
		buffer = ft_read_buffer(fd);
		if (!buffer)
			return (-1);
		arr[fd] = ft_strsplit_lines(buffer);
		free(buffer);
	}
	*line = arr[fd][0];
	if (*arr[fd] == NULL)
		return (0);
	arr[fd]++;
	return (1);
}
