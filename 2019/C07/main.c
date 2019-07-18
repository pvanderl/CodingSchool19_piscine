/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 14:21:27 by pvanderl          #+#    #+#             */
/*   Updated: 2019/07/18 15:03:38 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"
#include "ex03/ft_strjoin.c"

int		main(int ac, char **av)
{
	int		*r;

	printf("vide : ||%s||\n", ft_strdup(""));
	printf("HEY! : ||%s||\n", ft_strdup("HEY!"));
	printf("0x0 : %p\n", ft_range(5, 1));
	printf("0 : %d\n", ft_ultimate_range(&r, 5, 1));
	printf("1 : %d\n", ft_ultimate_range(&r, 0, 1));
	printf("101 : %d\n", ft_ultimate_range(&r, 0, 101));
	printf("%s\n", ft_strjoin(ac, av, "..."));
	printf("%s\n", ft_strjoin(0, av, "'"));

}
