/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 01:58:13 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/23 00:04:11 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	while (min - i < max)
		i++;
	tab = (int)(malloc(sizeof(int) * (max - min + 1)));
	i = 0;
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	tab[i] = '\0';
	*range = tab;
	return (i);
}
