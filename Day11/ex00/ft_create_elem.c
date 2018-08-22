/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 04:57:24 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/22 05:06:44 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list		*ft_create_elem(void *data)
{
	t_list	t_elem;
	t_elem.data = data;
	t_elem.next = NULL;

	return (&t_elem);
}
