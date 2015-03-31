/*
** my_getnbr.c for my_getnbr.c in /home/simomb_s/tests_maison/preparation_exam_machine
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Sat Oct 25 03:44:53 2014 stephanedarcy simomba
** Last update Wed Dec  3 16:49:56 2014 stephanedarcy simomba
*/

int	my_getnbr(char *str)
{
  int	nbr;
  int	signe;
  int	i;

  nbr = 0;
  i = 0;
  signe = 1;
  while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
    {
      if (str[i] == '-')
	signe = signe * -1;
      i = i + 1;
    }
  while (str[i] >= '0' && str[i] <= '9')
    {
      nbr = ((nbr * 10) + (str[i] - '0'));
       if (nbr < 0)
	 return (0);
      i = i + 1;
    }
  return (nbr * signe);
}
