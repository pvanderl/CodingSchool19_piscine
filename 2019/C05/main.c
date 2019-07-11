/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 17:49:07 by pvanderl          #+#    #+#             */
/*   Updated: 2019/07/11 10:39:23 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"
#include "ex08/ft_ten_queens_puzzle.c"

int		main(void)
{
	printf("%d\n", ft_iterative_factorial(3));
	printf("%d\n", ft_recursive_factorial(3));
	printf("%d\n", ft_iterative_power(2, 2));
	printf("%d\n", ft_recursive_power(2, 2));
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_is_prime(27));
	printf("%d\n", ft_find_next_prime(13));
	printf("%d\n", ft_ten_queens_puzzle());
	return (0);
}
