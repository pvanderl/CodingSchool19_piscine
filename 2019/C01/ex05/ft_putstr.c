/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 15:59:28 by pvanderl          #+#    #+#             */
/*   Updated: 2019/08/13 16:02:52 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*end(char *str)
{
	while (*str)
		str++;
	return (str);
}

void	ft_putstr(char *str)
{
	write(1, str, (int)(end(str) - str));
}
