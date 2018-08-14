/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 15:36:35 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/14 18:36:22 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	if (nb == 1 || nb == 0)
		return (0);
	i = 1;
	if (nb % 2 == 0)
		return (0);
	while (++i < nb)
		if (nb % i == 0)
			return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	while (!ft_is_prime(i))
		i++;
	return (i);
}
