/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 07:38:16 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/24 08:43:14 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
		*data_ref, int (*cmp)(void *, void *))
{
	while (begin_list)
	{
		if (0 == cmp(begin_list->data, data_ref))
			f(begin_list->data);
		begin_list = begin_list->next;
	}
}
