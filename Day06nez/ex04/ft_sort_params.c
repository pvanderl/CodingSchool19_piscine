/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 14:45:11 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/20 14:47:55 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	compare(char **tab, int position)
{
	char *x;

	if (0 < ft_strcmp(tab[position], tab[position - 1]))
	{
		x = *(tab + position);
		*(tab + position) = *(tab + position - 1);
		*(tab + position - 1) = x;
		if (position > 1)
			compare(tab, position - 1);
	}
}

int		main(int argc, char **argv)
{
	char	*tmp;
	int		i;
	int		j;

	argv++;
	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[i]) < 0)
			{
				tmp = argv[j];
				argv[j] = argv[i];
				argv[i] = tmp;
			}
			j++;
		}
		i++;
	}
	i = -1;
	while (argv[++i])
		ft_putstr(argv[i]);
	return (0);
}
