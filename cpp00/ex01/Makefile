NAME = phonebook
UNAME = $(shell uname)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -I.
MODE = none
ifeq ($(MODE), debug)
	CFLAGS += -fsanitize=address
endif

SRCS = $(shell find *.cpp)
OBJS_DIR = objs/
OBJS = $(notdir $(SRCS:.cpp=.o))
OBJS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

#text_color
COLOR_OFF =\033[0m
RED =\033[0;31m
GREEN =\033[0;32m
YELLOW =\033[0;33m
CYAN =\033[1;36m
MAGNETA =\033[95m 

all : $(NAME)

$(OBJS_DIR)%.o : %.cpp
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN)Compiling : $< $(COLOR_OFF)"

$(NAME) : $(OBJS_PREFIXED)
	@$(CC) $(CFLAGS) $(OBJS_PREFIXED) -o $(NAME)
	@echo "$(CYAN)$(NAME) done !$(COLOR_OFF)"

bonus : all

clean :
	@rm -rf $(OBJS_DIR)
	@echo "$(RED)Removed : obj files ($(NAME))$(COLOR_OFF)"

fclean : clean
	@rm -rf $(NAME)
	@echo "$(RED)Removed : $(NAME)$(COLOR_OFF)"

re : fclean all

.PHONY : clean fclean all re
