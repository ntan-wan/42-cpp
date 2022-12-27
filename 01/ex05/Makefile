NAME = harl
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
RESET =\033[0m
RED =\033[0;31m
GREEN =\033[0;32m
YELLOW =\033[0;33m
CYAN =\033[1;36m
MAGNETA =\033[95m 

all : $(NAME)

$(OBJS_DIR)%.o : %.cpp
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN)Compiling : $< $(RESET)"

$(NAME) : $(OBJS_PREFIXED)
	@$(CC) $(CFLAGS) $(OBJS_PREFIXED) -o $(NAME)
	@echo "$(CYAN)$(NAME) done !$(RESET)"


clean :
	@rm -rf $(OBJS_DIR)
	@echo "$(RED)Removed : obj files ($(NAME))$(RESET)"

fclean : clean rmt
	@rm -rf $(NAME)
	@echo "$(RED)Removed : $(NAME)$(RESET)"

re : fclean all

.PHONY : clean fclean all re test

# Tester
TEST_FILE = test.txt
TEST_CONTENT = this is a test file
TEST_WORD = test
NEW_WORD = awesome
test :
	@touch $(TEST_FILE)
	@printf "Filename: %s\n" $(TEST_FILE)
	@echo $(TEST_CONTENT) > $(TEST_FILE)
	@printf "Content: "; cat $(TEST_FILE)
	@printf "Command: ";
	./$(NAME) $(TEST_FILE) $(TEST_WORD) $(NEW_WORD)
	@printf "Content: "; cat $(TEST_FILE).replace

rmt :
	@rm -rf $(TEST_FILE) $(TEST_FILE).replace
