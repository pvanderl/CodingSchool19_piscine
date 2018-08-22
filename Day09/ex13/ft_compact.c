/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 06:25:10 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/17 06:41:50 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	move(char **tab, int position, int length)
{
	while (position < length - 1)
	{
		tab[position] = tab[position + 1];
		position++;
	}
}

int		ft_compact(char **tab, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		if (!tab[i])
		{
			move(tab, i, length);
			length--;
		}
		else
			i++;
	}
	return (length);
}
