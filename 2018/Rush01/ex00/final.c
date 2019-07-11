/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 18:45:42 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/19 18:42:14 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "final.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}

void	print_solution(char **grid)
{
	int i;
	int j;

	i = 0;
	while (grid[i])
	{
		j = 0;
		while (grid[i][j + 1])
		{
			ft_putchar(grid[i][j]);
			write(1, " ", 1);
			j++;
		}
		ft_putchar(grid[i][j]);
		write(1, "\n", 1);
		i++;
	}
}
