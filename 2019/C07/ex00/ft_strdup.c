/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 14:19:38 by pvanderl          #+#    #+#             */
/*   Updated: 2019/07/18 14:29:26 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s)
{
	char	*start;;

	start = s;
	while (*s)
		s++;
	return ((int)(s - start));
}

char	*ft_strdup(char *src)
{
	char	*out;
	int		i;

	if (!(out = (char *)malloc(sizeof(char) * ft_strlen(src))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		out[i] = src[i];
		i++;
	}
	return (out);
}
