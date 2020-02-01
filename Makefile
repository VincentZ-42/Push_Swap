# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vzhao <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/30 16:48:47 by vzhao             #+#    #+#              #
#    Updated: 2020/01/30 17:01:23 by vzhao            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = checker
NAME2 = push_swap
NORM = norminette -R CheckForbiddenSourceHeader
LIB = libft

all: $(NAME1) $(NAME2)

$(NAME1):
	@echo "making checker"

$(NAME2):
	@echo "making push_swap"

lib:
	@Make -C $(LIB)

clean:
	@Make fclean -C $(LIB)

fclean: clean
	/bin/rm -f $(NAME1) $(NAME2)

re: fclean all

test: re
	@echo "run test here"

norm:
	$(NORM)

.PHONY: clean fclean re all test norm
