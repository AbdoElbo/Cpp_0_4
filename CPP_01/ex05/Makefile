# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/07 16:20:34 by aelbouaz          #+#    #+#              #
#    Updated: 2026/04/29 11:59:14 by aelbouaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp Harl.cpp

OBJ_DIR = obj
OBJS = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

GREEN = \033[1;32m
BLUE = \033[1;34m
RESET = \033[0m

NAME = Harl

all: $(NAME)
	@printf "$(GREEN)Executable: $(NAME)$(RESET)\n"

$(NAME): $(OBJS)
	@printf "$(GREEN)Done!$(RESET)\n"
	@$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CPP) $(CPPFLAGS) -c $< -o $@
	@printf "$(GREEN).$(RESET)"

clean:
	@printf "$(BLUE)Cleaned up!$(RESET)\n"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
