NAME = bureaucrat
UNAME = $(shell uname)

#text_color
COLOR_OFF =\033[0m
RED =\033[0;31m
GREEN =\033[0;32m
YELLOW =\033[0;33m
CYAN =\033[1;36m
MAGNETA =\033[95m

CC = c++
CFLAGS = -Wall -Wextra -Werror

rwildcard=$(wildcard $1$2) $(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2))

HEADER_DIR = $(call rwildcard,./,includes)
HEADER = $(addprefix "-I", $(HEADER_DIR))

SRCS = $(call rwildcard,srcs/,*.cpp)
OBJS_DIR = objs/
OBJS = $(addprefix $(OBJS_DIR), $(SRCS:cpp=o))

all : $(NAME)

$(OBJS_DIR)%.o : %.cpp
	@mkdir -p $(@D)
	@printf "$(MAGNETA)Compiling: $<$(COLOR_OFF)\n"
	@$(CC) -o $@  -c $< $(HEADER)

$(NAME) : $(OBJS)
	@$(CC) $(OBJS) $(HEADER) $(LIBFT_LIB) $(EXTRA_LIBS) -o $(NAME)
	@echo "$(CYAN)$(NAME) done !$(COLOR_OFF)"

fclean :
	@rm -rf $(OBJS_DIR) $(NAME)
	@echo "$(RED)Removed : obj files ($(NAME))$(COLOR_OFF)"
	@echo "$(RED)Removed : $(NAME)$(COLOR_OFF)"

re : fclean all

valgrind :
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)

.PHONY : clean fclean all re
