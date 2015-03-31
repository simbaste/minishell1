##
## Makefile for Makefile in /home/simomb_s/semestre1/tests_maison/TP_systeme_unix/TP1
##
## Made by stephanedarcy simomba
## Login   <simomb_s@epitech.net>
##
## Started on  Mon Nov 24 10:58:02 2014 stephanedarcy simomba
## Last update Wed Jan 28 17:14:45 2015 stephanedarcy simomba
##

SRC	= main.c\
	  my_str_to_wordtab.c\
	  my_word_in_tab.c\
	  my_setenv.c\
	  my_fork.c\
	  my_path.c\
	  my_catstr.c\
	  my_cd.c\
	  epur_str.c\
	  get_next_line.c\

OBJ	= $(SRC:.c=.o)

CFLAGS	+= -g -W -Wall -Wextra
CFLAGS	+=
LDFLAGS	+=

NAME	= mysh

all	: $(LIB) CMP_LIB $(NAME) TEXTE

CMP_LIB	:
	make -C lib/my

TEXTE	:
	@echo -e "\e[00;5;32m   _____            __             _____ .__ .__            _________                           .__ .__            __   .__                           __"
	@echo -e "  /     \  _____   |  | __  ____ _/ ____\|__||  |    ____   \_   ___ \   ____    _____  ______  |__||  |  _____  _/  |_ |__|  ____    ____     ____  |  | __"
	@echo -e " /  \ /  \ \__  \  |  |/ /_/ __ \ \   __\|  ||  |  _/ __ \  /    \  \/  /  _ \  /     \ \____ \ |  ||  |  \__  \ \   __\|  | /  _ \  /    \   /  _ \ |  |/ /"
	@echo -e "/    Y    \ / __ \_|    < \  ___/ |  |   |  ||  |__\  ___/  \     \____(  <_> )|  Y Y  \|  |_> >|  ||  |__ / __ \_|  |  |  |(  <_> )|   |  \ (  <_> )|    <"
	@echo -e "\____|__  /(____  /|__|_ \ \___  >|__|   |__||____/ \___  >  \______  / \____/ |__|_|  /|   __/ |__||____/(____  /|__|  |__| \____/ |___|  /  \____/ |__|_ \ "
	@echo -e "        \/      \/      \/     \/                       \/          \/               \/ |__|                   \/                        \/               \/ \e[0;0;39m"

$(NAME)	: $(OBJ)
	cc -o $(NAME) $(OBJ) -lmy -L lib

clean	:
	rm -rf $(OBJ)
	make -C lib/my clean

fclean	: clean
	rm -rf $(NAME)

re	: fclean all

.PHONY	: all clean fclean re
