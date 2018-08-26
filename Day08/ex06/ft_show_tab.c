/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 04:11:27 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/26 01:03:18 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

void	print(int nb)
{
	char c;

	if (nb > 9)
	{
		c = '0' + (nb % 10);
		print(nb / 10);
	}
	else
		c = ('0' + nb);
	ft_putchar(c);
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;

	i = 0;
	while (par[i].str != '\0')
	{
		ft_putstr(par[i].str);
		print(par[i].size_param);
		ft_putchar('\n');
		j = 0;
		while (par[i].tab[j] != '\0')
		{
			ft_putstr(par[i].tab[j]);
			j++;
		}
		i++;
	}
}
