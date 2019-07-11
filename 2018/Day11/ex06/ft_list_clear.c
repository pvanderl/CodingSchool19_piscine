/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 04:24:21 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/24 07:33:56 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;

	while (*begin_list)
	{
		tmp = *begin_list->next;
		free(*begin_list);
		*begin_list = tmp;
	}
}
