/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 12:32:48 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/20 23:18:25 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		is_final_table(int n, char c[])
{
	char	final[n];
	int		i;

	i = 0;
	while (i < n)
	{
		final[i] = 10 - n + i;
		i++;
	}
	i = 0;
	while (i < n)
	{
		if (final[i] != c[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	print(char tb[], int n)
{
	int		i;
	char	chiffre;

	i = 0;
	while (i < n)
	{
		chiffre = tb[i];
		ft_putchar(chiffre + '0');
		i++;
	}
	if (!is_final_table(n, tb))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	recursive(char tb[], int level, int n)
{
	int x;

	if (level != 0)
	{
		tb[level] = tb[level - 1] + 1;
	}
	while (tb[level] <= (10 - n + level))
	{
		if (level == (n - 1))
		{
			print(tb, n);
		}
		else
		{
			x = level + 1;
			recursive(tb, x, n);
		}
		tb[level]++;
	}
}

void	ft_print_combn(int n)
{
	char	tb[n];
	int		i;

	i = 0;
	while (i < n)
	{
		tb[i] = i;
		i++;
	}
	recursive(tb, 0, n);
}
