/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 18:08:39 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/23 23:57:32 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN(Value) (Value % 2) == 0
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# include <unistd.h>

typedef int		t_bool;
void			ft_putstr(char *str);
t_bool			ft_is_even(int nbr);
int				main(int argc, char **argv);

#endif
