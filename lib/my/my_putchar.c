/*
** my_putchar.c for my_putchar.c in /home/simomb_s/Piscine_C_J07
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Wed Oct  8 10:21:53 2014 stephanedarcy simomba
** Last update Tue Jan  6 17:26:59 2015 stephanedarcy simomba
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
