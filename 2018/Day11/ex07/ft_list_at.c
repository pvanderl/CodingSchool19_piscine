/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 04:31:17 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/24 07:36:29 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 1;
	while (i <= nbr)
	{
		if (i == nbr)
			return (begin_list);
		if (begin_list->NULL)
			return ((void *)NULL);
		begin_list = begin_list->next;
		i++;
	}
	return ((void *)NULL);
}
