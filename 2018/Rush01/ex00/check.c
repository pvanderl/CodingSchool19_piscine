/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolver.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-laun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 16:22:49 by gde-laun          #+#    #+#             */
/*   Updated: 2018/08/19 18:41:15 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

/*
** check if the char nb is in the row
** post: true if contained
*/

int		check_row(char **tab, char nb, int row_nb)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (tab[row_nb][i] == nb)
			return (1);
		i++;
	}
	return (0);
}

/*
** check if the char nb is in the column
** post : true if contained
*/

int		check_column(char **tab, char nb, int col_nb)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (tab[i][col_nb] == nb)
			return (1);
		i++;
	}
	return (0);
}

/*
** check if the char nb is in the square
** post : true if contained
*/

int		check_square(char **tab, char nb, int row_nb, int col_nb)
{
	int i;
	int j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (tab[i + 3 * (row_nb / 3)][j + 3 * (col_nb / 3)] == nb)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
