/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 05:23:10 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/24 02:28:23 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	elem;

	elem = malloc(sizeof(t_list));
	elem.data = data;
	if (*begin_list == NULL)
		elem.next = NULL;
	else
		elem.next = *begin_list;
	*begin_list = &elem;
}
