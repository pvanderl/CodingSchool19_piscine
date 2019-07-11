/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 12:24:42 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/20 13:56:09 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	add_queen(int *positions, int *nb, int line)
{
	int i;

	i = 0;
	while (i < 8)
	{
		if (check_queen(positions, line, i))
		{
			positions[line] = i;
			if (line == 7)
				*nb = *nb + 1;
			else
				add_queen(positions, nb, line + 1);
		}
		i++;
	}
}

int		ft_eight_queens_puzzle(void)
{
	int nb;
	int positions[8];

	nb = 0;
	add_queen(positions, &nb, 0);
	return (nb);
}
