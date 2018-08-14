/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 11:12:20 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/14 17:25:31 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int outint;
	int negative;

	i = 0;
	outint = 0;
	negative = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' ||
			str[i] == '\r' || str[i] == '\v' || str[i] == '\n')
		i++;
	if (str[i] == '-')
	{
		negative = 1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		outint = outint * 10;
		outint += str[i] - 48;
		i++;
	}
	if (negative)
		return (-outint);
	return (outint);
}
