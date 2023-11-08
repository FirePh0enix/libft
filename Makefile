# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 10:54:05 by ledelbec          #+#    #+#              #
#    Updated: 2023/11/08 16:37:47 by ledelbec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES=\
	src/ft_alnum.c \
	src/ft_bzero.c \
	src/ft_isalpha.c \
	src/ft_isascii.c \
	src/ft_isdigit.c \
	src/ft_isprint.c \
	src/ft_isalnum.c \
	src/ft_memcpy.c \
	src/ft_memmove.c \
	src/ft_memset.c \
	src/ft_strlen.c \
	src/ft_toupper.c \
	src/ft_tolower.c \
	src/ft_strnstr.c \
	src/ft_strncmp.c \
	src/ft_memchr.c \
	src/ft_memcmp.c \
	src/ft_strchr.c \
	src/ft_strrchr.c \
	src/ft_atoi.c \
	src/ft_calloc.c \
	src/ft_strlcpy.c \
	src/ft_strlcat.c \
	src/ft_strdup.c \
	src/ft_strtrim.c \
	src/ft_substr.c \
	src/ft_strjoin.c \
	src/ft_split.c \
	src/ft_itoa.c \
	src/ft_strmapi.c \
	src/ft_striteri.c \
	\
	src/ft_putchar_fd.c \
	src/ft_putstr_fd.c \
	src/ft_putendl_fd.c \
	src/ft_putnbr_fd.c

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

build-test: $(NAME) $(TEST_SOURCES)
	$(CC) -o test.1 $(TEST_SOURCES) $(NAME) $(CFLAGS) -lbsd

run-test: build-test
	./test.1

fclean-test: fclean
	rm -f test.1 $(TEST_SOURCES:.c=.o)
