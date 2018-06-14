/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 07:33:01 by srheede           #+#    #+#             */
/*   Updated: 2018/06/14 07:33:41 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int        main(void)
{
  int		fd1;
  int		fd2;
  char		*line;
  

	fd1 = open("file", O_RDONLY);
	fd2 = open("file2", O_RDONLY);
	line = ft_strnew(50);
    while (get_next_line(fd2, &line) == 1)
    {
        ft_putstr("mine: ");
       	ft_putendl(line);
		get_next_line(fd1, &line);
		ft_putendl(line);
    }
	close(fd1);
	close(fd2);
	fd1 = open("file", O_RDONLY);
    while (get_next_line_theirs(fd1, &line) == 1)
    {
        ft_putstr("theirs: ");
        ft_putendl(line);
    }
	close(fd1);
}
