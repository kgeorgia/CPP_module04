# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 14:57:34 by kgeorgia          #+#    #+#              #
#    Updated: 2021/10/15 17:30:23 by kgeorgia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =			Interface

CC =			clang++

FLAGS =			-Wall -Wextra -Werror -g

RM =			rm -rf

SRC =			AMateria.cpp	Character.cpp	Cure.cpp	Ice.cpp		MateriaSource.cpp		main.cpp

HDR =			AMateria.hpp	Character.hpp	Cure.hpp	Ice.hpp		MateriaSource.hpp		ICharacter.hpp		IMateriaSource.hpp

OBJS =			$(SRC:.cpp=.o)

all:			$(NAME)

$(NAME) :		$(OBJS) Makefile
				@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
				@echo "Compiled "$(NAME)" successfully!"

%.o:%.cpp $(HDR)
				@$(CC) $(FLAGS) -c $< -o $@
				@echo "Compiled "$<" successfully!"

norme:
				norminette $(DIR_SRCS)

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all, clean, fclean, re, bonus