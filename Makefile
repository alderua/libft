# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ialdecoa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/27 00:10:22 by ialdecoa          #+#    #+#              #
#    Updated: 2022/12/27 00:10:27 by ialdecoa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COL_RESET			=	\033[0m
COL_BLACK			=	\033[0;30m
COL_RED				=	\033[0;31m
COL_GREEN			=	\033[0;32m
COL_YELLOW			=	\033[0;33m
COL_BLUE			=	\033[0;34m
COL_MAG				=	\033[0;35m
COL_CYAN			=	\033[0;36m
COL_WHITE			=	\033[0;37m
COL_BOLD_BLACK		=	\033[1;30m
COL_BOLD_RED		=	\033[1;31m
COL_BOLD_GREEN		=	\033[1;32m
COL_BOLD_YELLOW		=	\033[1;33m
COL_BOLD_BLUE		=	\033[1;34m
COL_BOLD_MAG		=	\033[1;35m
COL_BOLD_CYAN		=	\033[1;36m
COL_BOLD_WHITE		=	\033[1;37m
COL_BACK_BLACK		=	\033[40m
COL_BACK_RED		=	\033[41m
COL_BACK_GREEN		=	\033[42m
COL_BACK_YELLOW		=	\033[43m
COL_BACK_BLUE		=	\033[44m
COL_BACK_MAG		=	\033[45m
COL_BACK_CYAN		=	\033[46m
COL_BACK_WHITE		=	\033[47m

NAME = libft.a

HEADERNAME = libft.h

RM 		= rm -rf

CC 		= gcc

CFLAGS 		= -Wall -Wextra -Werror -c

AR 		= ar

ARFLAGS 	= -r -c -s

SRCS = ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_strlen.c \
	   ft_memchr.c \
	   ft_memset.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_memcmp.c \
	   ft_bzero.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strncmp.c \
	   ft_strnstr.c \

OBJS 		= $(SRCS:.c=.o)

BONUSOBJS 	= $(SRCSBONUS:.c=.o)

$(NAME): $(OBJS) $(HEADERNAME) #datos_objs_created datos_empaquetado_objs
#	@echo -e "\t${COL_BOLD_YELLOW} Empaquetando libreria $(NAME):\n${COL_RESET}"	
	${AR} ${ARFLAGS} $(NAME) ${OBJS}

all: $(NAME) bonus

clean: 
	@${RM} ${OBJS} ${BONUSOBJS}

fclean: clean
	$(RM) $(NAME)

re: fclean all

%.o: %.c $(HEADERNAME)
	@echo -e "\t${COL_BOLD_YELLOW} Compilando funcion: ${COL_BLUE} $< \t ${COL_RED} ->\c"
	@${CC} ${CFLAGS} $< -o ${<:.c=.o}
	@echo -e " ${COL_BOLD_GREEN}[ Compilado OK ]${COL_RESET}"

.PHONY: all clean fclean bonus re so #datos_comp_objs datos_empaquetado_objs


#----------------	REGLAS ORNAMENTALES E INFORMATIVAS

#datos_objs_compliling:
	@echo -e "${COL_BOLD_GREEN}\n\t\t--------CREANDO OBJETOS--------\n${COL_RESET}\c"
	@echo -e "${COL_BOLD_CYAN}\n\t Parametros:\n${COL_RESET}\c"
	@echo -e "${COL_BOLD_CYAN}\n\t Compilador:\t\t ${CC}\n\t Flags de compilado:\t ${CFLAGS}\n${COL_RESET}"
	
#datos_objs_created:
	@echo -e "${COL_BOLD_GREEN}\n\t\t--------OBJETOS CREADOS CORRECTAMENTE--------\n${COL_RESET}\c"
	
#datos_empaquetado_objs:
	@echo -e "${COL_BOLD_GREEN}\n\t\t--------CREANDO LA LIBRERIA--------\n${COL_RESET}\c"
	@echo -e "${CO_BOLD_CYAN}\n\t Empaquetador:\t\t ${AR}\n\t Flags de empaquetado:\t ${ARFLAGS}\n\n"

#----------------	REGLA PARA PASAR TEST EN LINUX
#so:
#	$(CC) -fPIC $(CFLAGS) $(SRCS) $(SRCSBONUS)
#	gcc -shared -o libft.so $(OBJS) $(BONUSOBJS)

#rmobjs: $(OBJS)
#	rm -f $< -v $(OBJS)


