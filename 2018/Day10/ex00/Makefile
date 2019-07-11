# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/22 00:25:30 by pvanderl          #+#    #+#              #
#    Updated: 2018/08/26 14:46:13 by pvanderl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./

HEADER = ./includes/

all:
	    gcc -c $(SRC)*.c
	    ar rc $(NAME) ./*.o
	    ranlib libft.a

clean:
	    rm -f ./*.o

fclean: clean
	    rm -f $(NAME)

re: fclean all
