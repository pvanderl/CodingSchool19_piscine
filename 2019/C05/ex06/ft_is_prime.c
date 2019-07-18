/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 21:48:01 by pvanderl          #+#    #+#             */
/*   Updated: 2019/07/11 10:14:54 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
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