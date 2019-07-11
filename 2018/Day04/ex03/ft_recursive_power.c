/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:49:37 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/19 23:31:40 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int i;

	if (power > 0)
		i = (nb * ft_recursive_power(nb, power - 1));
	else if (power == 0)
		return (1);
	else
		return (0);
	if (i > 2147483647 || i < -2147483648)
		i = 0;
	return (i);
}
