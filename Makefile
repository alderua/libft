# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ialdecoa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 20:06:51 by ialdecoa          #+#    #+#              #
#    Updated: 2022/10/22 22:57:52 by ialdecoa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJS = main.o ft_isalpha.o

CFLAGS = -Wall -Werror -Wextra

#Esta regla compila el programa pricipal.
$(NAME): $(OBJS)
		gcc $(CFLAGS) -o $@ $(OBJS)

main.o: main.c libft.h

ft_isalpha.o: ft_isalpha.c libft.h

.PHONY: fclean

clean:
		@rm -f $(OBJS)

fclean: clean
		@rm -f $(NAME)
