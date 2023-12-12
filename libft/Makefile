# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 11:12:25 by rdupeux           #+#    #+#              #
#    Updated: 2023/11/13 11:12:27 by rdupeux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Source, Executable, Includes, Library Defines
HEADER		=	libft.h
SRC			=	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
				ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
				ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
				ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_striteri.c \
				ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
				ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
				ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strtrim.c
BONUS		=	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
				ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
				ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
OBJ			=	$(SRC:.c=.o)
BONUS_OBJ	=	$(BONUS:.c=.o)

SRC_BONUS =\
# Compiler, Linker Defines
CC		= cc
CFLAGS 	= -Wall -Wextra -Werror
NAME	= libft.a

# Link all Object Files with external Libraries into Binaries
all: $(NAME)

re: fclean all

$(NAME): $(OBJ)
	ar -rcs $(NAME) $^

# Create a gdb/dbx Capable Executable with DEBUG flags turned on
debug:
	$(CC) -g3 $(SRC)

# Clean Up Objects, Exectuables, Dumps out of source directory
clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME) a.out core

so:
	$(CC) -fPIC -c $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

.PHONY: all clean fclean re
