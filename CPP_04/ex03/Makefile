# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/07 16:20:34 by aelbouaz          #+#    #+#              #
#    Updated: 2026/06/01 17:30:05 by aelbouaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -MMD -I headers -std=c++11

SRCS = main.cpp source/AMateria.cpp source/IMateriaSource.cpp source/ICharacter.cpp

OBJ_DIR = obj
OBJS = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)
DEPS = ${OBJS:.o=.d}

GREEN = \033[1;32m
BLUE = \033[1;34m
RESET = \033[0m

NAME = Poly

all: $(NAME)
	@printf "$(GREEN)Executable: $(NAME)$(RESET)\n"

$(NAME): $(OBJS)
	@printf "$(GREEN)Done!$(RESET)\n"
	@$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CPP) $(CPPFLAGS) -c $< -o $@
	@printf "$(GREEN).$(RESET)"

clean:
	@printf "$(BLUE)Cleaned up!$(RESET)\n"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
