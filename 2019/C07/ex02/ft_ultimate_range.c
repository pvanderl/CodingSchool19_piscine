/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 14:37:01 by pvanderl          #+#    #+#             */
/*   Updated: 2019/07/18 14:42:24 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	long int	delta;
	int			*out;
	int			i;

	delta = max - min;
	if (delta <= 0)
	{
		*range = NULL;
		return (0);
	}
	if (!(out = (int *)malloc(sizeof(int) * delta)))
		return (-1);
	i = 0;
	while (min + i < max)
		out[i++] = min;
	*range = out;
	return (delta);
}
