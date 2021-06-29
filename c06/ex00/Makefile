NAME	=	convert
SRC		=	*.cpp
OBJ		=	*.o

all		:	$(NAME)
$(NAME) : $(SRC)
			clang++  -Wall -Wextra -Werror   $(SRC) -o $(NAME)
clean	:
		rm -f $(NAME)
fclean	: clean	
re		: fclean
		make all
# clang++  -Wall -Wextra -Werror  $(SRC) -o $(NAME)