# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: smclacke <smclacke@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/03/07 13:12:48 by smclacke      #+#    #+#                  #
#    Updated: 2024/04/16 21:23:54 by smclacke      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			= brain

CC				= c++
CPPFLAGS		= -std=c++11 -Wall -Wextra -Werror -g -fsanitize=address

SRC			= main.cpp	\

OBJ		= $(SRC:%.cpp=%.o)

all			: $(NAME)

$(NAME)		: $(OBJ)
	@ echo "${BLACK} $(NAME) compiling...${RESET}"
	@ $(CC) $^ $(CPPFLAGS) -o $(NAME)
	@ echo "${BLACK} $(NAME) made!${RESET}"
	
$(OBJ)%.o:$(SRC)%.cpp
	@ mkdir -p $(OBJ_DIR)
	@ $(CC) $(CPPFLAGS) -c $< -o $@

clean		: 
	@ rm -rf $(OBJ)

fclean		: clean
	@ rm -f $(NAME)
	@ echo "${YELLOW} $(NAME) fcleaned!${RESET}"

re			: fclean all

.PHONY: all clean flcan re



## Colours ##
RESET		:= \033[0m
RED			:= \033[1;91m
GREEN		:= \033[1;92m
YELLOW		:= \033[1;93m
BLUE		:= \033[1;94m
PURPLE		:= \033[1;95m
CYAN		:= \033[1;96m
WHITE		:= \033[1;97m
BLACK		:= \033[1;90m
