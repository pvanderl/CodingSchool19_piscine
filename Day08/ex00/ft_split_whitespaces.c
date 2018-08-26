/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 23:55:02 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/23 23:57:01 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_elems(char *str)
{
	int	n;
	int	i;
	int	check;

	n = 0;
	i = 0;
	check = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && !check)
			check++;
		else if (check)
		{
			n++;
			check--;
		}
		i++;
	}
	if (check)
		n++;
	return (n);
}

void	ft_init_var(int var[3], size_t *l)
{
	var[0] = 0;
	var[1] = 0;
	var[2] = 0;
	*l = 0;
}

char	**ft_add_null(char **result, int size)
{
	result[size] = NULL;
	return (result);
}

char	**ft_split_whitespaces(char *str)
{
	size_t	l;
	char	**result;
	int		var[3];

	result = malloc(sizeof(char*) * (ft_count_elems(str) + 1));
	ft_init_var(var, &l);
	while (1)
	{
		if (str[var[1]] != ' ' && str[var[1]] != '\t' && str[var[1]] != '\n' &&
			str[var[1]] != '\0')
			l += sizeof(char);
		else if (l > 0)
		{
			result[var[0]] = malloc(l + 1);
			var[2] = 0;
			var[1] = var[1] - l;
			while (var[2] < (int)(l / sizeof(char)))
				result[var[0]][var[2]++] = str[var[1]++];
			result[var[0]++][var[2]] = '\0';
			l = 0;
		}
		if (str[var[1]++] == '\0')
			break ;
	}
	return (ft_add_null(result, var[0]));
}
