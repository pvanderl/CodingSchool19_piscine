/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:21:27 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/17 15:21:56 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_perso.h"
#include <stdlib.h>

int		count_perso(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '|')
			count++;
		i++;
	}
	return (count);
}

int		sp_atoi(char *str)
{
	int number;
	int i;

	number = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - 48);
		i++;
	}
	return (number);
}

void	add_info(t_perso **tab, int count, char *str, int lastch)
{
	int i;

	i = 0;
	while (str[i] != '|' && i <= lastch)
		i++;
	tab[count]->age = sp_atoi(str);
	str[lastch] = '\0';
	tab[count]->name = &str[i + 1];
}

t_perso	**ft_decrypt(char *str)
{
	int		i;
	int		j;
	int		count;
	t_perso **tab;

	i = 0;
	j = 0;
	count = 0;
	tab = (t_perso**)malloc(sizeof(t_perso*) * count_perso(str));
	while (str[i])
	{
		if (str[i] == ';')
		{
			tab[count] = (t_perso*)malloc(sizeof(t_perso));
			add_info(tab, count, &str[j], i - j);
			j = i + 1;
			count++;
		}
		i++;
	}
	tab[count] = (t_perso*)malloc(sizeof(t_perso));
	add_info(tab, count, &str[j], i - j);
	return (tab);
}
