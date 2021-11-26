# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 08:44:18 by tel-bouh          #+#    #+#              #
#    Updated: 2021/11/23 17:58:19 by tel-bouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./ft_atoi.c ./ft_strjoin.c ./ft_strlen.c \
	  ./ft_bzero.c ./ft_strlcat.c ./ft_strmapi.c \
	  ./ft_calloc.c ./ft_strlcpy.c ./ft_strncmp.c \
	  ./ft_isalnum.c ./ft_memchr.c ./ft_strtrim.c \
	  ./ft_isalpha.c ./ft_memcmp.c ./ft_strrchr.c \
	  ./ft_isascii.c ./ft_memmove.c ./ft_striteri.c \
	  ./ft_isdigit.c ./ft_memset.c ./ft_strdup.c \
	  ./ft_isprint.c ./ft_putchar_fd.c ./ft_strchr.c \
	  ./ft_itoa.c ./ft_putendl_fd.c ./ft_strchr.c \
	   ./ft_putnbr_fd.c ./ft_substr.c ./ft_split.c \
	   ./ft_putstr_fd.c ./ft_tolower.c ./ft_toupper.c \
	   ./ft_memcpy.c ./ft_strnstr.c

SRC_BONUS = ./ft_lstadd_back_bonus.c ./ft_lstadd_front_bonus.c \
			./ft_lstclear_bonus.c ./ft_lstdelone_bonus.c \
			./ft_lstlast_bonus.c ./ft_lstiter_bonus.c \
			./ft_lstmap_bonus.c ./ft_lstnew_bonus.c ./ft_lstsize_bonus.c

OBJ = ./ft_atoi.o ./ft_strjoin.o ./ft_strlen.o \
	  ./ft_bzero.o ./ft_strlcat.o ./ft_strmapi.o \
	  ./ft_calloc.o ./ft_strlcpy.o ./ft_strncmp.o \
	  ./ft_isalnum.o ./ft_memchr.o ./ft_strtrim.o\
	  ./ft_isalpha.o ./ft_memcmp.o ./ft_strrchr.o \
	  ./ft_isascii.o ./ft_memmove.o ./ft_striteri.o \
	  ./ft_isdigit.o ./ft_memset.o ./ft_strdup.o \
	  ./ft_isprint.o ./ft_putchar_fd.o ./ft_strchr.o \
	  ./ft_itoa.o ./ft_putendl_fd.o ./ft_strchr.o \
	   ./ft_putnbr_fd.o ./ft_substr.o ./ft_split.o \
	   ./ft_putstr_fd.o ./ft_tolower.o ./ft_toupper.o \
	   ./ft_memcpy.o ./ft_strnstr.o

OBJ_BONUS = ./ft_lstadd_back_bonus.o ./ft_lstadd_front_bonus.o ./ft_lstclear_bonus.o \
			./ft_lstdelone_bonus.o ./ft_lstlast_bonus.o ./ft_lstiter_bonus.o \
			./ft_lstmap_bonus.o ./ft_lstnew_bonus.o ./ft_lstsize_bonus.o

flags = -Werror -Wextra -Wall

all: $(NAME)

$(NAME):
	gcc -c $(flags) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus:
	gcc -c $(flags) $(SRC_BONUS) 
	ar rc $(NAME) $(OBJ_BONUS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
