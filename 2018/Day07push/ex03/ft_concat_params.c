/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 02:11:13 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/23 00:07:22 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_size(char **argv)
{
	int i;
	int nb;
	int j;

	i = 0;
	nb = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
			j++;
		nb += j;
		i++;
	}
	nb += i;
	return (nb);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		j;
	int		i;
	int		nb;

	str = (char *)(malloc(sizeof(char) * (get_size(argv) + 1)));
	i = 0;
	nb = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[nb] = argv[i][j];
			j++;
			nb++;
		}
		str[nb] = '\n';
		nb++;
		i++;
	}
	str[nb - 1] = '\0';
	return (str);
}
