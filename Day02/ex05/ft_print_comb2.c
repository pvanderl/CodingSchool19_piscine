/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 01:17:47 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/13 21:40:14 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int a)
{
	int dix;
	int unit;

	dix = a / 10;
	unit = a % 10;
	ft_putchar('0' + dix);
	ft_putchar('0' + unit);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = -1;
	b = -1;
	while (a++ <= 98)
	{
		b = a;
		while (b++ < 99)
		{
			print(a);
			ft_putchar(' ');
			print(b);
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}
