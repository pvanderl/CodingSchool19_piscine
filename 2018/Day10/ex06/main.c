/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 main.c												:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: pvanderl <pvanderl@student.s19.be>			+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2018/08/24 01:14:15 by pvanderl		   #+#	  #+#			  */
/*	 Updated: 2018/08/24 01:22:14 by pvanderl		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

int		main(int argc, char **argv)
{
	int a;
	int b;
	void *operation;
	a = get_int(argv[1]);
	b = get_int(argv[3]);
	operation = get_operation(argv[0]);
	*operation(a, b);
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int nbr;
	int negative;

	nbr = 0;
	negative = 0;
	i = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr *= 10;
		nbr += (int)str[i] - '0';
		i++;
	}
	if (negative == 1)
		return (-nbr);
	else
		return (nbr);
}
