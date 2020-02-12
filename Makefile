# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/30 16:48:47 by vzhao             #+#    #+#              #
#    Updated: 2020/02/11 21:00:42 by vzhao            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = checker
NAME2 = push_swap

LIBDIR = libft
SRCDIR = srcs
INCDIR = includes
SHARED = swap.c rotate.c \
		push.c rev_rotate.c \
		create_stack.c util.c

SRC = $(patsubst %, srcs/%, $(SHARED))
HEADERS = -I $(LIBDIR) -I $(INCDIR)
FLAGS = -Wall -Wextra -Werror -L./libft/ -lft $(HEADERS)
NORM = norminette -R CheckForbiddenSourceHeader

all: lib $(NAME1) $(NAME2)

$(NAME1):
	@gcc $(FLAGS) $(SRC) srcs/checker.c -o checker
	@echo "\033[0;32m---checker created---\033[0m"

$(NAME2):
	@gcc $(FLAGS) $(SRC) srcs/push_swap.c -o push_swap
	@echo "\033[0;32m---push_swap created---\033[0m"

lib:
	@Make -C $(LIBDIR)

clean:
	@Make fclean -C $(LIBDIR)

fclean: clean
	@/bin/rm -f $(NAME1) $(NAME2)
	@echo "\033[0;32m---checker & push_swap deleted---\033[0m"

re: fclean all

test: re
	@echo "Make some kind of test"

norm:
	$(NORM)

.PHONY: clean fclean re all test norm lib
