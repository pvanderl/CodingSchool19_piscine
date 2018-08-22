/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 18:04:51 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/19 18:46:14 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"
#include "resolve.h"
#include "final.h"

/*
** call the right method if the char is one of the input
*/

int		resolve(char **grid, int row_nb, int column_nb)
{
	if (row_nb == 9)
		return (1);
	else
	{
		print_solution(grid);
		if (grid[row_nb][column_nb] == '.')
			return (unknown(grid, row_nb, column_nb));
		else
			return (known(grid, row_nb, column_nb));
	}
}

int		known(char **grid, int row_nb, int column_nb)
{
	if (column_nb == 8)
		return (resolve(grid, row_nb + 1, 0));
	else
		return (resolve(grid, row_nb, column_nb + 1));
}

/*
** try every possibilities for the designated place
*/

int		unknown(char **grid, int row_nb, int column_nb)
{
	char i;

	i = '1';
	while (i <= '9')
	{
		if (!check_row(grid, i, row_nb) && !check_column(grid, i, column_nb)
				&& !check_square(grid, i, row_nb, column_nb))
		{
			grid[row_nb][column_nb] = i;
			if (column_nb == 8)
			{
				if (resolve(grid, row_nb + 1, 0))
					return (1);
			}
			else
			{
				if (resolve(grid, row_nb, column_nb + 1))
					return (1);
			}
		}
		i++;
	}
	grid[row_nb][column_nb] = '.';
	return (0);
}
