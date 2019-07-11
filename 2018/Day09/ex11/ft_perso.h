/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 05:35:09 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/17 15:23:32 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# include <string.h>
# define SAVE_THE_WORLD = "C programmer"

typedef struct	s_personnage
{
	char	*name;
	float	life;
	int		age;
	char	*profession;
}				t_perso;

#endif
