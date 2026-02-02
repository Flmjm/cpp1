NAME = sed

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  main.cpp
OBJS = $(SRCS:.cpp=.o)

RM = rm -rf

all: ${NAME}


${NAME}: ${OBJS}
	@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

%.o: %.cpp
	@$(CC) -c $< -o $@

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
