/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 14:42:34 by pvanderl          #+#    #+#             */
/*   Updated: 2019/07/18 15:04:47 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ftj_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int		len_tot(char **strs, int size, int s)
{
	if (size > 1)
		return (s + ftj_strlen(strs[size - 1]) + len_tot(strs, size - 1, s));
	if (size == 1)
		return (ftj_strlen(strs[size - 1]) + len_tot(strs, size - 1, s));
	return (0);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*out;
	int		pos;
	int		i;

	len = (size == 0 ? 1 : 1 + len_tot(strs, size, ftj_strlen(sep)));
	if (!(out = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	pos = 0;
	len = 0;
	while (pos < size)
	{
		i = 0;
		while (strs[pos][i])
			out[len++] = strs[pos][i++];
		i = 0;
		if (pos < size - 1)
			while (sep[i])
				out[len++] = sep[i++];
		pos++;
	}
	out[len] = '\0';
	return (out);
}
