/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 02:21:18 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/17 02:21:30 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		find_word(char *str, char *word)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] == 32)
		i++;
	while (str[i + j] && str[i + j] != 32)
	{
		if (str[i + j] >= 'A' && str[i + j] <= 'Z')
			str[i + j] += 32;
		if (str[i + j] != word[j])
			return (0);
		j++;
	}
	return (!word[j]);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		if (find_word(argv[i], "president") || find_word(argv[i], "attack") ||
			find_word(argv[i], "bauer"))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		i++;
	}
	return (0);
}
