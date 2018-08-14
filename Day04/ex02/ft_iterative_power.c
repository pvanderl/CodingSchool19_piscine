/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:42:27 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/14 18:13:18 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	if (power < 0)
		return (0);
	i = 0;
	result = 1;
	while (++i <= power)
		result *= nb;
	return (result);
}
