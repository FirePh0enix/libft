# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 10:54:05 by ledelbec          #+#    #+#              #
#    Updated: 2023/11/08 17:19:58 by ledelbec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES=\
	ft_alnum.c \
	ft_bzero.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_isalnum.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strlen.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strnstr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strdup.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	\
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c

OBJECTS=$(SOURCES:.c=.o)
NAME=libft.a

TEST_SOURCES=\
	test/main.c \
	test/test_toupper.c \
	test/test_strnstr.c

CC=clang
CFLAGS=-I. -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar r $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
