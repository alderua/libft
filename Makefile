# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ialdecoa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 20:06:51 by ialdecoa          #+#    #+#              #
#    Updated: 2022/10/23 02:07:53 by ialdecoa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJS = main.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o

CFLAGS = -Wall -Werror -Wextra

#Esta regla compila el programa pricipal.
all: $(NAME)

$(NAME): $(OBJS)
		gcc $(CFLAGS) -o $@ $(OBJS)

main.o: main.c libft.h
ft_isalpha.o: ft_isalpha.c libft.h
ft_isdigit.o: ft_isdigit.c libft.h
ft_isalnum.o: ft_isalnum.c libft.h
ft_isascii.o: ft_isascii.c libft.h

.PHONY: fclean

clean:
		@rm -f $(OBJS)

fclean: clean
		@rm -f $(NAME)
