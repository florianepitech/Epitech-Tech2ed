##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME = push_swap

CC = gcc

RM = rm -f

SRC = *.c ./int_array/*.c ./sorter/*.c

SRC_TEST = *.c int_array/*.c sorter/*.c ./tests/*.c

OBJ	= $(SRC:.c=.o)

LIBFLAG	= -L./lib/my/ -lmy

TEST_NAME = test_$(NAME)

.PHONY: all clean $(NAME) lib fclean install

all:
	make $(NAME)

lib:
	make -C ./lib/my

memcheck:
	$(CC) $(SRC) -o $(NAME) $(LIBFLAG) -g
	clear
	valgrind ./$(NAME) --leak-check=full

$(NAME):
	make -C ./lib/my
	$(CC) $(SRC) -o $(NAME) $(LIBFLAG)

install:
	make all
	cp $(NAME) ../../my_scripts/

exec:
	make $(NAME)
	./$(NAME)

clean:
	$(RM) $(OBJS)

fclean:
	clean
	$(RM) $(NAME)

tests_run: 	fclean
	make -C ./lib/my
	gcc -o $(TEST_NAME) $(SRC_TEST) --coverage -lcriterion $(LIBFLAG)
	./$(TEST_NAME)

re:
	fclean all
