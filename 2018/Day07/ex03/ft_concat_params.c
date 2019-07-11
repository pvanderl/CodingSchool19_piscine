/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 02:11:13 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/25 12:37:03 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_size(char **argv)
{
	int i;
	int nb;
	int j;

	i = 1;
	nb = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
			j++;
		nb += j;
		i++;
	}
	nb += i;
	return (nb);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		j;
	int		i;
	int		nb;

	if (argc == 1)
		return ("");
	str = (malloc(sizeof(char) * (get_size(argv))));
	i = 1;
	nb = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[nb] = argv[i][j];
			j++;
			nb++;
		}
		str[nb] = '\n';
		nb++;
		i++;
	}
	str[nb - 1] = '\0';
	return (str);
}
