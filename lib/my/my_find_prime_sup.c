/*
** my_find_prime_sup.c for my_find_prime_sup.c in /home/simomb_s/Piscine_C_J07
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Wed Oct  8 16:21:45 2014 stephanedarcy simomba
** Last update Sat Jan 10 20:28:23 2015 stephanedarcy simomba
*/

int	nb_premier(int nb)
{
  int	i;

  i = 2;
  if (nb == 0 || nb == 1)
    return (0);
  while (i < nb)
    {
      if ((nb % i) == 0)
	return (0);
      i = i + 1;
    }
  return (1);
}

int	my_find_prime_sup(int nb)
{
  while (nb)
    {
      if (nb_premier(nb) == 1)
	return (nb);
      nb = nb + 1;
    }
  return (0);
}
