/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 05:19:16 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/24 08:42:01 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *next;

	if (*begin_list)
	{
		next = *begin_list->next;
		if (*cmp(*data_ref, *begin_list->data) == 0)
		{
			free(*begin_list);
			*begin_list = next;
			ft_list_remove_if(begin_list, data_ref, cmp);
		}
		else
			ft_list_remove_if(&(begin_list->next), data_ref, cmp);
	}
}
