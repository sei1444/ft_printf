NAME = libftprintf.a
SRCS = ft_printf.c process1.c process2.c
OBJS = $(SRCS:.c=.0)
CC = cc
CFLAG = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME) : $(OBJS)
		ar rc $(NAME) $(OBJS)

.c.o: 
		$(CC) $(CFLAG) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:	fclean	all

.PHONY : all clean fclean re	