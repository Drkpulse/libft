# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 09:42:12 by joseferr          #+#    #+#              #
#    Updated: 2023/10/31 15:45:01 by joseferr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# NAME
NAME = libft.a

# SOURCES
SRCS =			checkers/ft_isalpha.c \
				checkers/ft_isdigit.c \
				checkers/ft_isalnum.c \
				checkers/ft_isascii.c \
				checkers/ft_isprint.c \
				str/ft_strlen.c \
				mem/ft_memset.c \
				mem/ft_bzero.c \
				mem/ft_memcpy.c\
				mem/ft_memmove.c \
				str/ft_strlcpy.c \
				str/ft_strlcat.c \
				str/ft_toupper.c \
				str/ft_tolower.c \
				str/ft_strchr.c \
				str/ft_strrchr.c \
				str/ft_strncmp.c \
				mem/ft_memchr.c\
				mem/ft_memcmp.c \
				str/ft_strnstr.c \
				nbr/ft_atoi.c \
				mem/ft_calloc.c \
				str/ft_strdup.c \
				str/ft_substr.c \
				str/ft_strjoin.c \
				str/ft_strtrim.c \
				str/ft_split.c \
				nbr/ft_itoa.c \
				str/ft_strmapi.c \
				str/ft_striteri.c \
				put/ft_putchar_fd.c \
				put/ft_putstr_fd.c \
				put/ft_putendl_fd.c \
				put/ft_putnbr_fd.c
# BONUS SOURCES
BONUS_SRCS =	lst/ft_lstadd_back.c \
				lst/ft_lstadd_front.c \
				lst/ft_lstdelone.c \
				lst/ft_lstlast.c \
				lst/ft_lstnew.c \
				lst/ft_lstsize.c \
				lst/ft_lstclear.c\
				lst/ft_lstiter.c \
				lst/ft_lstmap.c


OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Compiler
CC		 = gcc
RM 		=	rm -f
CFLAGS	 = -Wall -Wextra -Werror

# Colours
RED					=	\033[0;31m
GREEN				=	\033[0;32m
YELLOW				=	\033[0;33m
BLUE				=	\033[0;34m
PURPLE				=	\033[0;35m
CYAN				=	\033[0;36m
WHITE				=	\033[0;37m
RESET				=	\033[0m

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	@printf "\n$(PURPLE)==> $(GREEN)🗑️ Lift compiled successfully! \n$(RESET)"

bonus: $(OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(BONUS_OBJS) $(OBJS)
		@printf "\n$(PURPLE)==> $(CYAN)🗑️ Libtf with Bonus compiled successfully! \n$(RESET)"

clean:
	rm -rf $(OBJS) $(BONUS_OBJS)
	@printf "\n$(PURPLE)==> $(RED)🗑️ Removed Libft Temps \n$(RESET)"

fclean: clean
	rm -rf $(NAME)
	@printf "\n$(PURPLE)==> $(RED)🗑️ Removed Libtf \n$(RESET)"

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(BONUS_SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(BONUS_OBJS)
