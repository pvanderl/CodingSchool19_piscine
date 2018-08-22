/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 16:56:11 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/15 16:18:33 by pvanderl         ###   ########.fr       */
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

void	ft_sort_integer_table(int *tab, int size)
{
	int i;

	i = 1;
	while (i < size)
	{
		compare(tab, i);
		i++;
	}
}
