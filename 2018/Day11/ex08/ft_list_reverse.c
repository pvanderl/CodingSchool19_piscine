/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 04:40:04 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/24 04:58:32 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list.h"

void		ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*next;

	next = *begin_list->next;
	*begin_list->next = NULL;
	while (next)
	{
		prev = *begin_list;
		*begin_list = next;
		next = *begin_list->next;
		*begin_list->next = prev;
	}
}
