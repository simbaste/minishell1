/*
** my_swap.c for my_swap.c in /home/simomb_s/Piscine_C_J04
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Oct  2 15:04:20 2014 stephanedarcy simomba
** Last update Sun Nov 30 07:44:56 2014 stephanedarcy simomba
*/

int	my_swap(int *a, int *b)
{
  int	change;

  change = *a;
  *a = *b;
  *b = change;
  return (0);
}
