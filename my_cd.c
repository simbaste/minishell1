/*
** my_cd.c for  in /home/simomb_s/semestre1/rendu/PSU_2014_minishell1
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Wed Jan 21 02:23:14 2015 stephanedarcy simomba
** Last update Wed Jan 28 18:24:55 2015 stephanedarcy simomba
*/

#include <unistd.h>

int	my_cd(char **tab)
{
  if (tab && chdir(tab[1]) == -1)
    return (-1);
  return (0);
}
