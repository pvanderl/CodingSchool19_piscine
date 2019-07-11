/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   falsegrid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 17:40:34 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/19 18:43:11 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"
#include "falsegrid.h"

/*
** chack if the grid is right registred
*/

int		falsegrid(char **grid)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (grid[i][j] != '.')
			{
				tmp = grid[i][j];
				grid[i][j] = '.';
				if (check_row(grid, tmp, i) || check_square(grid, tmp, i, j) ||
						check_column(grid, tmp, j))
					return (1);
				grid[i][j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (0);
}
