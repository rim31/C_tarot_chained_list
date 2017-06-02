# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oseng <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/18 11:49:03 by oseng             #+#    #+#              #
#    Updated: 2016/01/18 11:49:14 by oseng            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GC = gcc

FLAG = -Wall -Wextra -Werror

SRCS = tarot.c

NAME = tarot

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):$(OBJ)
	@echo "by 😉seng    Tarot Game Card "

		@echo "\033[92mCompiling"
		@$(GC) -o $(NAME) $(FLAG) $(OBJ)
		@echo "\033[96m->Done"

%.o: %.cpp
	 @$(CC) -o $@ -c $< $(FLAG)

clean:
		@echo "\033[92mDeleting"
		@rm -f $(OBJ)
		@echo "\033[96mClean done"


fclean: clean
		@echo "\033[92mDeleting"
		@rm -f $(NAME)
		@echo "\033[96mFclean Done"

re: fclean all

.PHONY: all clean fclean re