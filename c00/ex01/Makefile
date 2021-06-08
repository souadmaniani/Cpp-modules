NAME	=	phoneBook
SRC		=	phoneBook.cpp contact.cpp main.cpp
OBJ		=	phoneBook.o contact.o main.o

all		:	$(NAME)
$(NAME) : $(SRC)
		clang++  -Wall -Wextra -Werror  $(SRC) -o $(NAME)
clean	:
		rm -f *.o
fclean	: clean
		rm -f $(NAME)
re		: fclean
		make all