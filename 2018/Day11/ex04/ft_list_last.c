/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 02:30:07 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/24 07:32:12 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list->next != NULL)
		begin_list = begin_list->next;
	return (begin_list);
}
