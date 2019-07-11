/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 18:04:22 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/15 16:02:05 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int factorielle;

	if (nb > 12 || nb < 0)
		return (0);
	factorielle = 1;
	i = 0;
	while (++i <= nb)
		factorielle *= i;
	return (factorielle);
}
