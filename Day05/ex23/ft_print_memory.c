/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 18:57:58 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/15 19:41:31 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_adress(int nb)
{
	char c;

	if (nb > 15)
	{
		c = '0' + (nb % 16);
		print_adress(nb / 16);
	}
	else
		c = ('0' + nb);
	if (c > '9')
		c += 40;
	ft_putchar(c);
}


void	*ft_print_memory(void *addr, unsigned int size)
{
	int i;


	i = 0;
	while (i < size)
	{
		print_adress(addr);
	}





}
