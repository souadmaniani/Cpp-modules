NAME	=	a.out
SRC		=	*.cpp
OBJ		=	*.o

all		:	$(NAME)
$(NAME) : $(SRC)
			clang++  $(SRC) -o $(NAME) -std=c++98
clean	:
		rm -f $(NAME)
fclean	: clean	
re		: fclean
		make all
# clang++  -Wall -Wextra -Werror  -std=c++98 -Wconversion $(SRC) -o $(NAME)