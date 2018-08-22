/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 23:28:21 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/22 00:07:38 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int *positions)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		ft_putchar('1' + positions[i]);
		i++;
	}
	ft_putchar('\n');
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

void	add_queen(int *positions, int line)
{
	int i;

	i = 0;
	while (i < 8)
	{
		if (check_queen(positions, line, i))
		{
			positions[line] = i;
			if (line == 7)
				print(positions);
			else
				add_queen(positions, line + 1);
		}
		i++;
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	int positions[8];

	add_queen(positions, 0);
}
