/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 01:51:58 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/22 15:37:56 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(int argc, char **argv)
{
	int i;
	int a;
	int b;
	// elem fonction
	if (argc != 4)
	{
		print_error(BAD_ARGUMENTS_NUMBER);
		return (0);
	}
	else if (wrong_input(argv[1]) || wrong_input(argv[3]))
	{
		print_wrong_arguments();
		return (0);
	}
	else if (strlen(argv[2]) > 1)
	{
		print_too_long_operator();
		return (0);
	}
	else if (unknown_operator(argv[2]))
	{
		print_unknown_operator();
		return (0);
	}
	else
	{
		fonction = get_f(argv[2]);



	}
	return (0);

