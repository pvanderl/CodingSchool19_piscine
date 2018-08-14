/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 01:21:34 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/13 21:42:40 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int nb)
{
	char c;

	if (nb > 9)
	{
		c = '0' + (nb % 10);
		print(nb / 10);
	}
	else
		c = ('0' + nb);
	ft_putchar(c);
}

void	ft_putnbr(int nb)
{
	int nbbis;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	nbbis = nb / 1;
	print(nbbis);
}
