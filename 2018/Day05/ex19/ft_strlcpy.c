/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 18:03:17 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/19 10:04:04 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int s;

	s = (int)size;
	i = 0;
	while (src[i] && i < s - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i++;
	while (src[i])
		i++;
	return (i);
}
