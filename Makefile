SOURCES=\
	src/ft_alnum.c \
	src/ft_bzero.c \
	src/ft_isalpha.c \
	src/ft_isdigit.c \
	src/ft_isprint.c \
	src/ft_memcpy.c \
	src/ft_memmove.c \
	src/ft_memset.c \
	src/ft_strlen.c
OBJECTS=$(SOURCES:.c=.o)
NAME=libft.a

TEST_SOURCES=\
	test/main.c \
	test/memmove.c

CC=clang
CFLAGS=-I.

all: $(NAME)

$(NAME): $(OBJECTS)
	ar r $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

build-test: $(NAME) $(TEST_SOURCES)
	$(CC) -o test.1 $(TEST_SOURCES) $(NAME) $(CFLAGS)

run-test: build-test
	./test.1

fclean-test: fclean
	rm -f test.1 $(TEST_SOURCES:.c=.o)
