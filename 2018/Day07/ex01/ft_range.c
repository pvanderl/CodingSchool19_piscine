/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 01:51:25 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/24 02:45:58 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *out;
	int i;

	if (min >= max)
		return ((void *)0);
	i = 0;
	out = (malloc(sizeof(int) * (max - min + 1)));
	while (i < max - min)
	{
		out[i] = min + i;
		i++;
	}
	return (out);
}
