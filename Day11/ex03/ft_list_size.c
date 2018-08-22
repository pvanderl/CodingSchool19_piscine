/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 05:55:28 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/22 06:01:39 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_list_size(t_list *begin_list)
{
	int i;
	t_list *pointer;

	i = 0;
	pointer = begin_list;
	while (*(pointer) != NULL)
	{
		i++;
		pointer = pointer->next;
	}
	return i;
}
