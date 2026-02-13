NAME = libftprintf.a

INC := ft_printf.h

SRC :=  ft_printf_char.c\
        ft_printf_hex.c\
        ft_printf_nbr.c\
        ft_printf_ptr.c\
        ft_printf_unsigned.c\
        ft_putchar_fd.c\
	ft_putstr_fd.c\
        ft_printf_str.c\
        ft_verify.c\
        ft_printf.c\

SRCO := $(SRC:.c=.o)

CC	:= cc

AR	:= ar -crs

CFLAGS := -Wall -Wextra -Werror -I $(INC) 

all:	$(NAME)

$(NAME): $(SRCO) 
	$(AR) $(NAME) $(SRCO) 

$(SRCO): %.o: %.c $(INC)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(SRCO) $(SRCBONUSO)
	
fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY : all clean fclean re 
