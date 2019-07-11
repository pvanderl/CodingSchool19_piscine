/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 18:57:26 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/20 19:22:36 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

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

	if (nb == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		nbbis = nb / 1;
		print(nbbis);
	}
}
