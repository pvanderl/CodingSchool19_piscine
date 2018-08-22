/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 13:16:55 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/20 18:54:51 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
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
