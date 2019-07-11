/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 17:42:06 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/19 16:44:17 by sdelvenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H

int		check_row(char **tab, char nb, int row_nb);
int		check_column(char **tab, char nb, int col_nb);
int		check_square(char **tab, char nb, int row_nb, int col_nb);
#endif
