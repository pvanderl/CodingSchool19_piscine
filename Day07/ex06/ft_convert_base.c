/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 00:06:26 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/23 21:19:31 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		evaluate_base(char *base)
{
	int i;
	int a;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] < 32 || base[i] == '-' || base[i] == '+')
			return (0);
		if (i > 0)
		{
			a = i - 1;
			while (a >= 0)
			{
				if (base[i] == base[a])
					return (0);
				a--;
			}
		}
		i++;
	}
	return (i);
}

int		str_is_valid(char *str, char *base)
{
	int i;
	int j;

	i = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			i++;
		j = 0;
		while (str[i] != base[j])
		{
			if (base[j] == '\0')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_atoi_base(char *str, char *base, int basetype)
{
	int number;
	int i;
	int j;
	int sign;

	number = 0;
	i = 0;
	sign = 1;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] > 31 && str[i] != '-' && str[i] != '+')
	{
		j = 0;
		while (str[i] != base[j])
			j++;
		number = number * basetype + j;
		i++;
	}
	return (number * sign);
}

void	print_nbr(int nbr, int basetype, char *base, char *result)
{
	long lnbr;

	lnbr = nbr;
	if (lnbr < 0)
	{
		*result = '-';
		result += 1;
	}
	if (lnbr >= basetype)
	{
		print_nbr(lnbr / basetype, basetype, base, result);
	}
	while (*result)
		result++;
	*result = base[lnbr % basetype];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		basetype_from;
	int		basetype_to;
	int		convert;
	int		i;
	char	*ret;

	i = 0;
	ret = (char*)malloc(34);
	while (i < 34)
	{
		ret[i] = '\0';
		i++;
	}
	basetype_from = evaluate_base(base_from);
	basetype_to = evaluate_base(base_to);
	if (!basetype_from || !basetype_to)
	{
		return (0);
	}
	convert = ft_atoi_base(nbr, base_from, basetype_from);
	print_nbr(convert, basetype_to, base_to, ret);
	return (ret);
}
