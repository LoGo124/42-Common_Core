# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlopez-g <nlopez-g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/19 19:33:15 by nlopez-g          #+#    #+#              #
#    Updated: 2023/08/12 00:11:57 by nlopez-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER 	= inc/ft_printf.h
MKFL	= Makefile
NAME 	= libftprintf.a

OBJ_DIR	= obj/
LIB_DIR = lib/Libft/
LIB		= $(LIB_DIR)libft.a

SRC			= $(wildcard src/*.c)
#SRC 	= src/ft_printf.c src/ft_put_char.c src/ft_put_str.c \
		src/ft_put_nums.c src/ft_put_hex.c src/ft_put_pointer.c

RM 		= rm -rf
MP		= mkdir -p

CFLAGS 	= -Werror -Wall -Wextra -W -O3 -Ofast 

LIBC 	= ar -rcs

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))
DEP	= $(addsuffix .d, $(basename $(OBJ)))

$(OBJ_DIR)%.o: %.c $(MKFL)
	@$(MP) $(dir $@)
	${CC} ${CFLAGS} -MMD -I ./ -c $< -o $@

all:
	@$(MAKE) -C $(LIB_DIR) 
	@$(MAKE) $(NAME)

-include ${DEP}
$(NAME): $(OBJ)
	$(LIBC) $(NAME) $(OBJ) $(LIB)

testmain:
	gcc main.c libftprintf.a

clean:
	$(RM) $(OBJ) $(OBJ_DIR)
	@$(MAKE) clean -C $(LIB_DIR)

fclean:
	@$(MAKE) clean
	@$(MAKE) fclean -C $(LIB_DIR)
	$(RM) $(NAME)

re:
	@$(MAKE) re -C $(LIB_DIR)
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re

##MakeFile para Librerias
#NAME		= libftprintf.a
#HEADER		= inc/ft_printf.h
#LIBS		= $(wildcard lib/*/)
#LIBSA		= $(wildcard lib/*/*.a)
#
##COLORS
#GRN =		\033[0;32m
#RED =		\033[0;31m
#
##OPTIONS
#CC 			= gcc
#CFLAGS		= -Wall -Wextra -Werror
#
##FILES
#SRC			= $(wildcard src/*.c)
#OBJS		= $(SRC:.c=.o)
#
#
##RULES
#%.o : %.c $(HEADER)
#	$(CC) $(CFLAGS) -c $< -o $@
#
#all: $(NAME)
#
#$(NAME):	$(OBJS)
#	@make -C $(LIBS)
#	@ar crs $(NAME) $(OBJS) lib/libft/libft.a
#
#clean:
#	@rm -f ${OBJS}
#
#fclean:		clean
#	@rm -f $(NAME)
#
#re :		fclean all
#
#.PHONY:		all clean fclean re #bonus
#