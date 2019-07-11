/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:15:22 by pvanderl          #+#    #+#             */
/*   Updated: 2019/07/11 10:39:58 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	i = 1;
	while (++i < nb)
		if (nb % i == 0)
			return (0);
	return (1);
}

int				ft_find_next_prime(int nb)
{
	if (nb > 3 && nb % 2 == 0)
		nb++;
	while (!ft_prime(nb))
	{
		nb += 2;
		if (nb % 3 == 0 || nb % 7 == 0 || nb % 5 == 0)
			nb += 2;
	}
	return (nb);
}
