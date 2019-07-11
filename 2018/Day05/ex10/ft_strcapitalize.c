/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 10:03:20 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/19 10:03:42 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alphanum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int inword;

	i = 0;
	inword = 0;
	while (str[i])
	{
		if (is_alphanum(str[i]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			i++;
			while (is_alphanum(str[i]) && str[i])
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] = str[i] + 32;
				i++;
			}
		}
		if (str[i])
			i++;
	}
	return (str);
}
