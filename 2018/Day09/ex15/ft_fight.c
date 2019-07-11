/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 09:49:59 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/17 17:11:09 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fight.h"
#include "ft_perso.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_fight(t_perso *attacker, t_perso *attacked, int a)
{
	if (attacker->life <= 0 || attacked->life <= 0)
		return ;
	ft_putstr(attacker->name);
	if (a == 0)
	{
		ft_putstr(" does a judo kick on ");
		attacked->life -= 15;
	}
	else if (a == 1)
	{
		ft_putstr(" does a judo punch on ");
		attacked->life -= 5;
	}
	else if (a == 2)
	{
		ft_putstr(" does a judo headbutt on ");
		attacked->life -= 20;
	}
	ft_putstr(attacked->name);
	ft_putstr(".\n");
	if (attacked->life <= 0)
	{
		ft_putstr(attacked->name);
		ft_putstr(" is dead.\n");
	}
}
