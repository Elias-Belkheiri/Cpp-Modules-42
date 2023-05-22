SRCS	= $(wildcard *.cpp)

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

NAME	= Iterator

all		: $(NAME)


$(NAME) : $(SRCS)
		@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
		@echo "\x1B[35m 🚀 $(NAME) was successfully created \x1B[0m"

clean	:
		@rm -rf $(NAME)

fclean	: clean
		@rm -rf $(NAME)
		@echo "\x1B[31m $(NAME) was deleted \x1B[0m"

re		: fclean all