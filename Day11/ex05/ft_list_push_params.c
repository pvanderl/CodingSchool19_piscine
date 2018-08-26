/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 07:35:23 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/24 07:37:13 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
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

t_list		*ft_list_push_params(int ac, char **av)
{
	int			i;
	t_list		*elem;

	elem = (void *)0;
	i = 0;
	while (++i < ac)
		ft_list_push_front(&elem, av[i]);
	return (elem);
}
