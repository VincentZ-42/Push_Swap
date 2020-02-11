# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/30 16:48:47 by vzhao             #+#    #+#              #
#    Updated: 2020/02/11 14:14:11 by vzhao            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = checker
NAME2 = push_swap
NORM = norminette -R CheckForbiddenSourceHeader
LIB = libft
SRC = srcs/*.c
INC = includes
HEADERS = -I $(LIB) -I $(INC)
FLAGS = -Wall -Wextra -Werror -L./libft/ -lft $(HEADERS)

all: lib $(NAME1) $(NAME2)

$(NAME1):
	@gcc $(FLAGS) $(SRC) -o checker
	@echo "\033[0;32m---checker created---\033[0m"

$(NAME2):
	@gcc $(FLAGS) $(SRC) -o push_swap
	@echo "\033[0;32m---push_swap created---\033[0m"

lib:
	@Make -C $(LIB)

clean:
	@Make fclean -C $(LIB)

fclean: clean
	@/bin/rm -f $(NAME1) $(NAME2)
	@echo "\033[0;32m---checker & push_swap deleted---\033[0m"

re: fclean all

test: re
	@echo "run test here"

norm:
	$(NORM)

.PHONY: clean fclean re all test norm lib
