/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 14:30:23 by pvanderl          #+#    #+#             */
/*   Updated: 2019/07/18 14:35:49 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	long int	delta;
	int			*out;
	int			i;

	delta = max - min;
	if (delta <= 0 || !(out = (int *)malloc(sizeof(int) * delta)))
		return (NULL);
	i = 0;
	while (min + i < max)
		out[i++] = min;
	return (out);
}
