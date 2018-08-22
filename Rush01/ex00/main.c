/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 14:42:18 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/19 18:44:31 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "final.h"
#include "resolve.h"
#include "falsegrid.h"

/*
** check the input size and characters
*/

int		check_sizes(char **arg)
{
	int i;
	int j;

	i = 0;
	while (arg[i])
	{
		j = 0;
		while (arg[i][j])
		{
			if (arg[i][j] != '.' && arg[i][j] > '9' && arg[i][j] < '0')
				return (1);
			j++;
		}
		if (j != 9)
			return (1);
		i++;
	}
	if (i != 9)
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 10 || check_sizes(&argv[1]))
	{
		print_error();
		return (0);
	}
	if (falsegrid(&argv[1]))
	{
		print_error();
		print_solution(&argv[1]);
	}
	else
	{
		if (resolve(&argv[1], 0, 0))
			print_solution(&argv[1]);
	}
	return (0);
}
