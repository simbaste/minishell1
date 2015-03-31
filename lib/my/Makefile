##
## Makefile for Makefile in
##
## Made by stephanedarcy simomba
## Login   <simomb_s@epitech.net>
##
## Started on  Mon Nov 10 13:56:17 2014 stephanedarcy simomba
## Last update Mon Jan 26 16:20:37 2015 stephanedarcy simomba
##

SRCS	= my_putchar.c\
	  my_puterror.c\
	  my_isneg.c\
	  my_put_nbr.c\
	  my_swap.c\
	  my_putstr.c\
	  my_strlen.c\
	  my_getnbr.c\
	  my_sort_int_tab.c\
	  my_power_rec.c\
	  my_square_root.c\
	  my_is_prime.c\
	  my_find_prime_sup.c\
	  my_strcpy.c\
	  my_strncpy.c\
	  my_revstr.c\
	  my_strstr.c\
	  my_strcmp.c\
	  my_strncmp.c\
	  my_strupcase.c\
	  my_strlowcase.c\
	  my_strcapitalize.c\
	  my_str_isalpha.c\
	  my_str_isnum.c\
	  my_str_islower.c\
	  my_str_isupper.c\
	  my_str_isprintable.c\
	  my_showstr.c\
	  my_showmem.c\
	  my_strcat.c\
	  my_strncat.c\
	  my_strlcat.c\
	  my_putnbr_base.c\
	  my_putstring.c\
	  my_printf.c\
	  flag_b.c\
	  flag_c.c\
	  flag_d.c\
	  flag_ld.c\
	  flag_lu.c\
	  flag_p.c\
	  flag_s.c\
	  flag_S.c\
	  flag_x.c\
	  flag_X.c

NAME    = libmy.a

RM      = rm -f

CFLAGS  += -Wextra -Wall -Werror
CFLAGS  += -ansi -Wall -Werror

LDFLAGS =

OBJS	= $(SRCS:.c=.o)

all	: $(NAME)

$(NAME)	: $(OBJS)
	ar rc libmy.a $(OBJS)
	ranlib libmy.a $(LDFLAGS)
	cp my.h ../../include
	cp libmy.a ../

clean	:
	$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY	: all clean fclean re
