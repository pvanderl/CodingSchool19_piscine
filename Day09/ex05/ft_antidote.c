/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 22:31:27 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/17 15:18:13 by pvanderl         ###   ########.fr       */
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

int		ft_antidote(int i, int j, int k)
{
	int s[3];

	s[0] = i;
	s[1] = j;
	s[2] = k;
	ft_sort_integer_table(s, 3);
	if (s[1] == s[0] || s[1] == s[2])
		return (0);
	return (s[1]);
}
