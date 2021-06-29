NAME	=	convert
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
# clang++  -Wall -Wextra -Werror  $(SRC) -o $(NAME)