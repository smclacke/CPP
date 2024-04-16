# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: smclacke <smclacke@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/03/07 13:13:06 by smclacke      #+#    #+#                  #
#    Updated: 2024/04/16 21:25:38 by smclacke      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			= harlfilter

INCLUDE			= -Iinclude

CC				= c++
CPPFLAGS		= -std=c++11 -Wall -Wextra -Werror -g -fsanitize=address
HEADERS			= Harl.hpp
HEADER_DIR		= include
HEADER			= $(addprefix $(HEADER_DIR)/, $(HEADERS))

SRCS			= main.cpp		\
				Harl.cpp		\

SRC_DIR			= src
SRC				= $(addprefix $(SRC_DIR)/, $(SRCS))

OBJ_DIR			= obj
OBJ				= $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))


all			: $(NAME)

$(NAME)		: $(OBJ)
	@ echo "${BLACK} $(NAME) compiling...${RESET}"
	@ $(CC) $^ $(CPPFLAGS) $(INCLUDE) -o $(NAME)
	@ echo "${BLACK} $(NAME) made!${RESET}"
	
$(OBJ_DIR)/%.o:$(SRC_DIR)/%.cpp $(HEADER)
	@ mkdir -p $(OBJ_DIR)
	@ $(CC) $(CPPFLAGS) $(iNCLUDE) -c $< -o $@

clean		: 
	@ rm -rf $(OBJ_DIR)

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
