/*
** my_puterror.c for  in /home/simomb_s/semestre1/rendu/PSU_2014_minishell1/lib/my
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Mon Jan 26 16:17:43 2015 stephanedarcy simomba
** Last update Mon Jan 26 16:19:58 2015 stephanedarcy simomba
*/

#include <unistd.h>

void	my_error(char c)
{
  write(2, &c, 1);
}

void	my_puterror(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_error(str[i]);
      i++;
    }
}
