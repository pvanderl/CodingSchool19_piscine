/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 18:20:44 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/16 18:52:03 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int h;

	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	h = hour % 24;
	if (h > 12 && h < 23)
		printf("%d.00 P.M. AND %d.00 P.M", h % 12, (h % 12) + 1);
	if (h < 11 && h > 0)
		printf("%d.00 A.M. AND %d.00 A.M", h, h + 1);
	if (h == 0)
		printf("12.00 P.M. AND 01.00 A.M");
	if (h == 12)
		printf("12.00 P.M. AND 01.00 P.M");
	if (h == 11)
		printf("11.00 A.M. AND 12.00 P.M");
	if (h == 23)
		printf("11.00 P.M. AND 12.00 A.M");
}
