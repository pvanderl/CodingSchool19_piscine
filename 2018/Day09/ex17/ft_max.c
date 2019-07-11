/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:46:49 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/17 16:28:52 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int i;
	int buff;

	i = 0;
	buff = tab[0];
	if (length < 0)
		return (0);
	while (i < length)
	{
		if (tab[i] > buff)
			buff = tab[i];
		i++;
	}
	return (buff);
}
