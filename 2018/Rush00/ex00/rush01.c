/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 21:52:53 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/12 21:52:58 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"
#include <unistd.h>

void	print_top(int x)
{
	int ix;

	ix = 0;
	while (++ix <= x)
	{
		if (ix == 1)
		{
			ft_putchar(47);
		}
		else if (ix < x)
		{
			ft_putchar(42);
		}
		else
		{
			ft_putchar(92);
		}
	}
	write(1, "\n", 2);
}

void	print_bottom(int x)
{
	int ix;

	ix = 0;
	while (ix++ < x)
	{
		if (ix == 1)
		{
			ft_putchar(92);
		}
		else if (ix < x)
		{
			ft_putchar(42);
		}
		else
		{
			ft_putchar(47);
		}
	}
}

void	print_mid(int x)
{
	int ix;

	ix = 0;
	while (ix++ <= x)
	{
		if (ix == 1 || ix == x)
		{
			ft_putchar(42);
		}
		else
		{
			ft_putchar(' ');
		}
	}
	write(1, "\n", 2);
}

void	rush(int x, int y)
{
	int iy;

	iy = 0;
	while (iy < y)
	{
		if (iy == 0)
		{
			print_top(x);
		}
		else
		{
			if (iy == y - 1)
			{
				print_bottom(x);
			}
			else
			{
				print_mid(x);
			}
		}
		iy++;
	}
}
