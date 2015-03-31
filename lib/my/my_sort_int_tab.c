/*
** my_sort_int_tab.c for my_sort_int_tab.c in /home/simomb_s/Piscine_C_J04
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Oct  2 17:21:05 2014 stephanedarcy simomba
** Last update Mon Nov 10 15:50:50 2014 stephanedarcy simomba
*/

#include "my.h"

void	my_sort_int_tab(int *tab, int size)
{
  int	i_compt1;
  int	i_compt2;
  int	i_val;

  i_compt1 = 0;
  i_compt2 =0;
  while (i_compt1 <= size - 1)
    {
      while (i_compt2 < size)
	{
	  if (tab[i_compt1] > tab[i_compt2])
	    {
	      i_val = tab[i_compt1];
	      tab[i_compt1] = tab[i_compt2];
	      tab[i_compt2] = i_val;
	    }
	  i_compt2 = i_compt2 + 1;
	}
      i_compt1 = i_compt1 + 1;
    }
}
