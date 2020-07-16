NAME	=	megaphone
SRC		=	megaphone.cpp
OBJ		=	megaphone.o

all		:	$(NAME)
$(NAME) :
		clang++  -Wall -Wextra -Werror  $(SRC) -o $(NAME)
clean	:
		rm -f *.o
fclean	: clean
		rm -f $(NAME)
re		: fclean
		make all