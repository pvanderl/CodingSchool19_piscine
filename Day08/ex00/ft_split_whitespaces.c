/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 02:39:08 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/22 15:42:48 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_in_charset(char c, char *charset)
{
	while (*charset)
		if (*(charset++) == c)
			return (1);
	return (0);
}

int		get_size(char *str, char *charset)
{
	int i;
	int inword;
	int count;

	i = 0;
	inword = 0;
	count = 0;
	while (str[i])
	{
		if (is_in_charset(str[i], &charset[0]))
		{
			inword = 0;
		}
		else if (!inword)
		{
			inword = 1;
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		inword;
	int		count;

	tab = (char **)(malloc(sizeof(char *) * get_size(str, charset)));
	i = 0;
	inword = 0;
	count = 0;
	while (str[i])
	{
		if (is_in_charset(str[i], &charset[0]))
		{
			str[i] = '\0';
			inword = 0;
		}
		else if (!inword)
		{
			inword = 1;
			tab[count] = &str[i];
			count++;
		}
		i++;
	}
	return (&tab[0]);
}

char	**ft_split_whitespaces(char *str)
{
	char charset[3];

	charset[0] = ' ';
	charset[1] = '\n';
	charset[2] = '\t';
	return (ft_split(str, &charset[0]));
}
