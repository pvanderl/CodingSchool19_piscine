/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 01:51:25 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/22 20:49:59 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_range(int min, int max)
{
	int *out;
	int i;

	i = 0;
	out = (int)(malloc(sizeof(int) * (max - min + 1)));
	while (i < max - min)
	{
		out[i] = min + i;
		i++;
	}
	out[i] = '\0';
	return (out);
}
