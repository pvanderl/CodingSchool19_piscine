/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 18:03:23 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/19 14:57:20 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RESOLVE_H
# define RESOLVE_H

int		resolve(char **grid, int row_nb, int column_nb);
int		known(char **grid, int row_nb, int column_nb);
int		unknown(char **grid, int row_nb, int column_nb);

#endif
