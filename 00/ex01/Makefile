NAME = phonebook
UNAME = $(shell uname)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

MODE = none
ifeq ($(MODE), debug)
	CFLAGS += -fsanitize=address
endif

rwildcard=$(wildcard $1$2) $(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2))

HEADER_DIR = $(call rwildcard,./,include)
HEADER = $(addprefix -I, $(HEADER_DIR))

SRCS = $(call rwildcard,srcs/,*.cpp)
OBJS_DIR = objs/
OBJS = $(addprefix $(OBJS_DIR), $(SRCS:cpp=o))


#text_color
COLOR_OFF =\033[0m
RED =\033[0;31m
GREEN =\033[0;32m
YELLOW =\033[0;33m
CYAN =\033[1;36m
MAGNETA =\033[95m

all : $(NAME)

$(OBJS_DIR)%.o : %.cpp
	@mkdir -p $(@D)
	@printf "$(MAGNETA)Compiling: $<$(COLOR_OFF)\n"
	@$(CC) $(CFLAGS) $(HEADER) -c $< -o $@ 

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(CFLAGS) $(HEADER) -o $(NAME)
	@printf "$(CYAN)$(NAME) done !$(COLOR_OFF)\n"

bonus : all

clean :
	@rm -rf $(OBJS_DIR)
	@echo "$(RED)Removed : obj files ($(NAME))$(COLOR_OFF)"

fclean : clean
	@rm -rf $(NAME)
	@echo "$(RED)Removed : $(NAME)$(COLOR_OFF)"

re : fclean all

.PHONY : clean fclean all re
