COMPILE = c++ -g -Wall -Wextra -Werror -std=c++98
NAME = world_on_fire
SRCS = main.cpp Animal.cpp Brain.cpp Cat.cpp Dog.cpp
OBJS_FOLDER = obj
OBJS = $(SRCS:%.cpp=$(OBJS_FOLDER)/%.o)

$(NAME): $(OBJS)
	$(COMPILE) $(OBJS) -o $(NAME)

$(OBJS_FOLDER)/%.o: %.cpp
	@mkdir -p $(OBJS_FOLDER)
	$(COMPILE) -c $< -o $@

all: $(NAME)

clean:
	@rm -rf $(OBJS_FOLDER)

fclean:	clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
