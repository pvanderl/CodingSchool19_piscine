/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 16:36:06 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/17 16:49:54 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_join(char **tab, char *sep)
{
	int		i;
	int		j;
	int		count;
	char	*str;

	i = -1;
	count = 0;
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j])
			count++;
	}
	str = (char*)malloc(sizeof(char) * (count + i));
	i = -1;
	count = 0;
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j])
			str[count++] = tab[i][j];
		str[count] = *sep;
		count++;
	}
	return (str);
}
