/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 05:39:21 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/20 18:59:48 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# include <unistd.h>
# define TRUE 1

typedef int		t_bool;

enum	e_state
{
	OPEN,
	CLOSE
};

typedef struct	s_door
{
	enum e_state		state;
}				t_door;

#endif
