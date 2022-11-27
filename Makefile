# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ialdecoa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 20:06:51 by ialdecoa          #+#    #+#              #
#    Updated: 2022/11/27 11:41:41 by ialdecoa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJS = main.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
	   ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_toupper.o \
	   ft_tolower.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o\
	   ft_strlcpy.o

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
ft_isprint.o: ft_isprint.c libft.h
ft_strlen.o: ft_strlen.c libft.h
ft_memset.o: ft_memset.c libft.h
ft_bzero.o: ft_bzero.c libft.h
ft_memcpy.o: ft_memcpy.c libft.h
ft_memmove.o: ft_memmove.c libft.h
ft_toupper.o: ft_toupper.c libft.h
ft_tolower.o: ft_tolower.c libft.h
ft_strchr.o: ft_strchr.c libft.h
ft_strrchr.o: ft_strrchr.c libft.h
ft_strncmp.o: ft_strncmp.c libft.h
ft_memchr.o: ft_memchr.c libft.h
ft_memcmp.o: ft_memcmp.c libft.h
ft_strlcpy.o: ft_strlcpy.c libft.h

.PHONY: fclean

clean:
		@rm -f $(OBJS)

fclean: clean
		@rm -f $(NAME)
