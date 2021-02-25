NAME = Phonebook

CC = clang++
CPPFLAGS = -Werror -Wall -Wextra
RM = rm -rf

SRCS_FILES = main.cpp phonebook.cpp contact.cpp
OBJS = $(SRCS_FILES:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
