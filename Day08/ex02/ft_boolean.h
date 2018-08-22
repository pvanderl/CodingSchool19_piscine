/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 18:08:39 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/22 15:58:28 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define EVEN_MSG "I have an even number of arguments\n"
# define ODD_MSG "I have an odd number of arguments\n"
# define EVEN(x) (x % 2) == 0
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# include <unistd.h>

typedef int		t_bool;

#endif
