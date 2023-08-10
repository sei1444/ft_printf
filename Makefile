NAME = libftprintf.a
LIBFTDIR = ./libft
LIBFT = $(LIBFTDIR)/libft.a
INC = -I./include -I./libft
SRCSDIR = ./srcs
SRCS = $(SRCSDIR)/ft_print_char.c \
       $(SRCSDIR)/ft_print_decimal.c \
	   $(SRCSDIR)/ft_print_hex_lower.c \
	   $(SRCSDIR)/ft_print_hex_upper.c \
	   $(SRCSDIR)/ft_print_percent.c \
	   $(SRCSDIR)/ft_print_pointer.c \
	   $(SRCSDIR)/ft_print_string.c \
	   $(SRCSDIR)/ft_print_unsigned_decimal.c \
	   $(SRCSDIR)/ft_printf.c \
	   $(SRCSDIR)/ft_putnbr_base.c
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAG = -Wall -Wextra -Werror

$(NAME): $(OBJS)
		$(MAKE) -C $(LIBFTDIR)
		cp $(LIBFT) $(NAME)
		ar rc $(NAME) $(OBJS)

all: $(NAME)

.c.o: 
		$(CC) $(CFLAG) $(INC) -c $< -o $@

clean:
		rm -f $(OBJS)
		$(MAKE) -C $(LIBFTDIR) clean

fclean:	clean
		rm -f $(NAME)
		$(MAKE) -C $(LIBFTDIR) fclean

re:	fclean	all

.PHONY: all clean fclean re	