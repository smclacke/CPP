# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: smclacke <smclacke@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/06/29 18:48:03 by smclacke      #+#    #+#                  #
#    Updated: 2024/06/30 18:39:21 by smclacke      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			= AForm

INCLUDE			= -Iinclude

ASCII			= *_shrubbery

CC				= c++
CPPFLAGS		= -std=c++11 -Wall -Wextra -Werror -g -fsanitize=address
HEADERS			= Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp \
					RobotomyRequestForm.hpp PresidentialPardonForm.hpp
HEADER_DIR		= include
HEADER			= $(addprefix $(HEADER_DIR)/, $(HEADERS))

SRCS			= main.cpp					\
				Bureaucrat.cpp				\
				AForm.cpp					\
				ShrubberyCreationForm.cpp	\
				RobotomyRequestForm.cpp		\
				PresidentialPardonForm.cpp
				
				

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
	@ rm -f $(ASCII)
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



