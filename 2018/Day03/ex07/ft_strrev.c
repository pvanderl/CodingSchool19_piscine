/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 16:19:04 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/14 17:19:26 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_char(char *a, char *b)
{
	char x;

	x = *a;
	*a = *b;
	*b = x;
}

char	*ft_strrev(char *str)
{
	int	len;
	int i;

	len = 0;
	i = 0;
	while (*(str + len) != '\0')
		len++;
	while (i < len)
	{
		ft_swap_char(str + i, str + len - 1);
		i++;
		len--;
	}
	return (str);
}
