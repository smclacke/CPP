# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: smclacke <smclacke@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/03/07 11:56:06 by smclacke      #+#    #+#                  #
#    Updated: 2024/03/07 12:33:29 by smclacke      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			= megaphone

CC				= c++
CPPFLAGS		= -Wall -Wextra -Werror -std=c++98

SRCS			= megaphone.cpp

OBJS			= $(SRCS:%.cpp=%.o)

all			: $(NAME)

$(NAME)		: $(OBJS)
	@ echo "${BLACK} $(NAME) compiling...${RESET}"
	@ $(CC) $^ $(CPPFLAGS) -o $(NAME)
	@ echo "${BLACK} $(NAME) Made!${RESET}"
	
$(OBJS)%.o:$(SRCS)%.cpp
	@ $(CC) $(CPPFLAGS) -c $< -o $@

clean		: 
	@ rm -rf $(OBJS)

fclean		: clean
	@ rm -f $(NAME)
	@ echo "${YELLOW} $(NAME) fCleaned!${RESET}"

re			: fclean all

.PHONY: all clean fclean re

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
