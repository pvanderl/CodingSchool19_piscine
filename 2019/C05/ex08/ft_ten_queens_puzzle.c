/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:29:34 by pvanderl          #+#    #+#             */
/*   Updated: 2019/07/11 10:39:08 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	print_sol(int *positions, int nbq)
{
	int i;

	i = -1;
	while (++i < nbq)
		ft_putchar(positions[i] + '0');
	write(1, "\n", 1);
}

int		check_queen(int *positions, int line, int col)
{
	int i;

	i = -1;
	while (++i < line)
		if (positions[i] == col || (positions[i] + (line - i) == col) ||
				(positions[i] - (line - i) == col))
			return (0);
	return (1);
}

void	add_queen(int *positions, int *nb, int line, int nbq)
{
	int i;

	i = 0;
	while (i < nbq)
	{
		if (check_queen(positions, line, i))
		{
			positions[line] = i;
			if (line == nbq - 1)
			{
				*nb = *nb + 1;
				print_sol(positions, nbq);
			}
			else
				add_queen(positions, nb, line + 1, nbq);
		}
		i++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int nb;
	int positions[10];

	nb = 0;
	add_queen(positions, &nb, 0, 10);
	return (nb);
}
