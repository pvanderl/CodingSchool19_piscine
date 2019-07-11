/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 01:58:13 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/24 05:48:08 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (max <= min)
	{
		*range = (void *)0;
		return (0);
	}
	tab = (malloc(sizeof(int) * (max - min + 1)));
	i = 0;
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}
