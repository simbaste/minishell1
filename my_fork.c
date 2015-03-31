/*
** my_fork.c for  in /home/simomb_s/semestre1/rendu/PSU_2014_minishell1
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Mon Jan 12 12:20:13 2015 stephanedarcy simomba
** Last update Wed Jan 28 19:08:38 2015 stephanedarcy simomba
*/

#include "mysh.h"

int	exec_file(char **my_tab, char **envp)
{
  int	status;
  int	pid;
  int	j;
  int	i;

  i = 2;
  j = 0;
  while (my_tab[0][i] != '\0')
    my_tab[0][j++] = my_tab[0][i++];
  my_tab[0][j] = '\0';
  if ((pid = fork()) == -1)
    return (-1);
  if (pid == 0)
    {
      if ((execve(my_tab[0], my_tab, envp)) == -1)
	{
	  my_puterror("invalid file execve fail\n");
	  return (-1);
	}
    }
  else
    wait(&status);
  return (0);
}

int		my_execve(char **my_tab, char **envp, char *src)
{
  int		status;
  pid_t		pid;

  if ((pid = fork()) == -1)
    {
      my_puterror("the fonction fork fail !!!\n");
      return (-1);
    }
  if (pid == 0)
    {
      if ((execve(src, my_tab, envp)) == -1)
	return (-1);
    }
  else
    wait(&status);
  return (0);
}
