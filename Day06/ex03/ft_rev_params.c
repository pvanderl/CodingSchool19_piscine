/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 00:19:22 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/20 12:05:54 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int j;

	argv++;
	argc -= 2;
	while (argc >= 0)
	{
		j = 0;
		while (argv[argc][j])
		{
			ft_putchar(argv[argc][j]);
			j++;
		}
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
