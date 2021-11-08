##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME	= info_file

CC	= gcc

RM	= rm -f

SRC	= *.c ./print_file_info/*.c ./options/*.c

SRC_TEST = *.c ./print_file_info/*.c ./options/*.c

OBJ	= $(SRC:.c=.o)

LIBFLAG	= -L./lib/my/ -lmy

TEST_NAME = test_$(NAME)

all: $(NAME)

$(NAME):	fclean
			make -C ./lib/my
			$(CC) $(SRC) -o $(NAME) $(LIBFLAG)

clean:
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

tests_run: 	fclean
		make -C ./lib/my
		gcc -o $(TEST_NAME) $(SRC_TEST) --coverage -lcriterion $(LIBFLAG)
		./$(TEST_NAME)

re: fclean all
