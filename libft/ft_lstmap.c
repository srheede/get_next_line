/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:08:13 by srheede           #+#    #+#             */
/*   Updated: 2018/06/01 10:12:21 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lst_new;
	t_list	*begin;

	if (!lst)
		return (NULL);
	lst_new = f(lst);
	begin = lst_new;
	lst = lst->next;
	while (lst)
	{
		lst_new->next = f(lst);
		lst_new = lst_new->next;
		lst = lst->next;
	}
	return (begin);
}
