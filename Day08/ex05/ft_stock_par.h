/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 10:27:26 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/24 00:49:00 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <stdlib.h>
# include <stdlib.h>

char				**ft_split_whitespaces(char *str);
int					ft_strlen(char *str);
char				*ft_strcpy(char *src);
struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_putchar(char c);
void				ft_show_tab(struct s_stock_par *par);

typedef struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;

#endif
