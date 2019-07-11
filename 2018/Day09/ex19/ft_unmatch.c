/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 16:26:28 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/17 16:26:47 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	compare(int *tab, int position)
{
	int x;

	if (*(tab + position) < *(tab + position - 1))
	{
		x = *(tab + position);
		*(tab + position) = *(tab + position - 1);
		*(tab + position - 1) = x;
		if (position > 1)
			compare(tab, position - 1);
	}
}

int		ft_unmatch(int *tab, int length)
{
	int i;

	i = 0;
	if (length < 0)
		return (0);
	if (length == 1)
		return (tab[0]);
	while (i < length)
	{
		compare(tab, i);
		i++;
	}
	i = 1;
	while (i < length)
	{
		if (tab[i] != tab[i + 1])
			return (tab[i]);
		i += 2;
	}
	return (tab[length - 1]);
}
