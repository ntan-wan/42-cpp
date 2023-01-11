NAME = animal
UNAME = $(shell uname)

CC = c++
CFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98 -pedantic

HEADER_DIR =  $(shell find . -name "includes" -type d)
HEADER = $(addprefix "-I", $(HEADER_DIR))

DIRS = $(shell find srcs -type d)
SRCS = $(wildcard $(foreach fd, $(DIRS), $(fd)/*.cpp))
OBJS_DIR = objs/
OBJS = $(addprefix $(OBJS_DIR), $(SRCS:cpp=o))

#text_color
RESET =\033[0m
RED =\033[0;31m
GREEN =\033[0;32m
YELLOW =\033[0;33m
CYAN =\033[1;36m
MAGNETA =\033[95m 

all : $(NAME)

$(OBJS_DIR)%.o : %.cpp
	@mkdir -p $(@D)
	@printf "$(YELLOW)Compiling : $< $(RESET)\n"
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADER)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(HEADER) -o $(NAME)
	@echo "$(GREEN)$(NAME) done !$(RESET)"

clean :
	@rm -rf $(OBJS_DIR)
	@echo "$(RED)Removed : obj files ($(NAME))$(RESET)"

fclean : clean
	@rm -rf $(NAME)
	@echo "$(RED)Removed : $(NAME)$(RESET)"

re : fclean all

.PHONY : clean fclean all re test
