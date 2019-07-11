/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 07:27:27 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/24 08:38:26 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_list.h"

void	ft_swap_list(t_list **l1, t_list **l2)
{
	t_list *temp;
	temp = *l1;
	*l1 = *l2;
	*l2 = temp;
}
void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *i;
	t_list *j;

	i = *begin_list;
	while (i)
	{
		j = i->next;
		while (j)
		{
			if (cmp(i->data, j->data) > 0)
			{
				ft_swap_list(&i, &j);
			}
		j = j->next;
		}
	i = i->next;
	}
}
