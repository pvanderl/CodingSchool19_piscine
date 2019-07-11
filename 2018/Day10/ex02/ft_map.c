/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 00:46:38 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/26 11:54:24 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *out;

	out = (int)malloc(sizeof(int) * length + 1);
	i = 0;
	while (i < length)
	{
		out[i] = f(tab[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}
