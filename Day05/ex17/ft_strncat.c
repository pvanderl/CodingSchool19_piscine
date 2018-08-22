/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 09:52:45 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/19 10:02:42 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int b;

	i = 0;
	b = 0;
	while (dest[i] != '\0')
		i++;
	while (src[b] != '\0' && b < nb)
	{
		dest[i + b] = src[b];
		b++;
	}
	while (b < nb)
	{
		dest[i + b] = '\0';
		b++;
	}
	return (dest);
}
