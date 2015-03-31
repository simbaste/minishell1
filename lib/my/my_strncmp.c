/*
** my_strncmp.c for my_strncmp.c in /home/simomb_s/Piscine_C_J06
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Oct  7 22:30:29 2014 stephanedarcy simomba
** Last update Sat Jan 10 21:01:42 2015 stephanedarcy simomba
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (i <= n)
    {
      if (s1[i] == s2[i])
	i = i + 1;
      else
	{
	  return (s1[i] - s2[i]);
	}
    }
  return (0);
}
