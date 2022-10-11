#MakeFile para Librerias
NAME		= libft.a
BNUS 		= libft.a
HEADER		= libft.h


#COLORS
GRN =		\033[0;32m
RED =		\033[0;31m

#FILES
SRC			= ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd
OBJS		= $(SRC:.c=.o)

SRC_BONUS	= ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
OBJS_BONUS	= $(SRC_BONUS:.c=.o)

#OPTIONS
CFLAGS		= -Wall -Wextra -Werror 

#RULES#
%.o : %.c
	gcc $(FLAGS) -c $< -o $@

all:		$(NAME)

bonus:		$(BNUS)

$(NAME):	$(OBJS) $(HEADER)
	@ar crs $(NAME) $(OBJS)

$(BNUS):	$(BONUS_OBJS) $(HEADER)
	@ar crs $(BNUS) $(OBJS) $(BONUS_OBJS)

clean:
	@rm -f ${OBJS} ${OBJS_BONUS}

fclean:		clean
	@rm -f $(NAME)

re :		fclean all

.PHONY:		all clean fclean re bonus