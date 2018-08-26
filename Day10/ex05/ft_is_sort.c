/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 01:26:58 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/26 12:03:03 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	length--;
	while (length > 0)
	{
		if (f(tab[length - 1], tab[length]) < 0)
			return (0);
		length--;
	}
	return (1);
}
