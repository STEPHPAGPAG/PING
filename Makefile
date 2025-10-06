CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = ft_ping
SRC = main.c utils.c

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
re: clean all

.PHONY: all clean re

