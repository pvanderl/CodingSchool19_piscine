/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 05:23:10 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/24 07:20:21 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	elem;

	elem = malloc(sizeof(t_list));
	elem.data = data;
	elem.next = NULL;
	if (*begin_list == NULL)
		*begin_list = &elem;
	else
	{
		while (begin_list->next != NULL)
			begin_list++;
		begin_list->next = &elem;
	}
}
