/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 13:44:37 by srheede           #+#    #+#             */
/*   Updated: 2018/05/31 15:51:34 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*list_next;

	list = *alst;
	while (list)
	{
		list_next = list->next;
		del(list->content, list->content_size);
		free(list);
		list = list_next;
	}
	*alst = NULL;
}
