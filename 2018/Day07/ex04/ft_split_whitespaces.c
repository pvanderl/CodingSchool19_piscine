/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 21:45:20 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/25 12:40:02 by pvanderl         ###   ########.fr       */
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

int		size_before_next(char *str, char *charset)
{
	int i;

	i = 0;
	while (!is_in_charset(str[i], charset) && str[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		parts;
	int		i;
	int		len;
	int		j;

	parts = get_size(str, charset);
	tab = malloc(sizeof(char *) * parts + 1);
	i = 0;
	while (i < parts)
	{
		while (is_in_charset(*str, charset))
			str++;
		len = size_before_next(str, charset);
		tab[i] = malloc(sizeof(char) * len);
		j = -1;
		while (++j < len)
		{
			tab[i][j] = *(str++);
		}
		tab[i][j] = '\0';
		i++;
	}
	tab[parts] = (void *)0;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char *charset;

	charset = "\n\t ";
	return (ft_split(str, charset));
}
