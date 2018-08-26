/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 04:57:24 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/24 08:36:16 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list	t_elem;

	t_elem = (t_list)malloc(sizeof(t_list));
	t_elem.data = data;
	t_elem.next = NULL;
	return (&t_elem);
}
