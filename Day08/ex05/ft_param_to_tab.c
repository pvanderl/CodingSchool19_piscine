/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 03:53:28 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/24 00:50:52 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char					*ft_strcpy(char *src)
{
	int		i;
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (&str[0]);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *tab;
	int			i;

	tab = malloc(sizeof(t_stock_par) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		(tab + i)->size_param = ft_strlen(av[i]);
		(tab + i)->str = malloc(sizeof(char *));
		(tab + i)->str = av[i];
		(tab + i)->copy = malloc(sizeof(char *) * (ft_strlen(av[i]) + 1));
		(tab + i)->copy = ft_strcpy(av[i]);
		(tab + i)->tab = ft_split_whitespaces(av[i]);
		i++;
	}
	(tab + i)->str = NULL;
	return (tab);
}
