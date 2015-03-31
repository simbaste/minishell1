/*
** get_next_line.c for get_next_line.c in /home/simomb_s/semestre1/rendu/CPE_2014_get_next_line
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Mon Nov 17 13:44:28 2014 stephanedarcy simomba
** Last update Thu Jan 29 15:09:41 2015 stephanedarcy simomba
*/

#include <unistd.h>
#include "get_next_line.h"
#include "mysh.h"

static int	end;
static int	M;

char		*my_strcpy(char *dest, char *src)
{
  int		i;

  i = 0;
  while (src && src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}

char		*put_last_line(int n, int i, char *src)
{
  (void)n;
  if (src && src[0] != '\0')
    {
      src[i] = '\0';
      end = 1;
      return (src);
    }
  return (NULL);
}

char		*my_realloc(char *src, int buff_size)
{
  char		*tmp;
  int		i;

  tmp = NULL;
  i = 0;
  if ((tmp = malloc((1000 + NBR_READ + buff_size + 1) * sizeof(*tmp))) == NULL)
    return (NULL);
  while (src && src[i] != '\0')
    {
      tmp[i] = src[i];
      i = i + 1;
    }
  tmp[i] = '\0';
  free(src);
  return (tmp);
}

char		*put_line(int i, const int fd, char *buffer, char *src)
{
  long		buff_size;
  int		n;
  int		j;

  buff_size = NBR_READ;
  while ((n = read(fd, buffer, NBR_READ)) > 0 || n == -1)
    {
      buff_size = ((NBR_READ + 1) + buff_size);
      M = 3;
      if (n == -1 || (src = my_realloc(src, buff_size)) == NULL)
	return (NULL);
      buffer[NBR_READ] = '\0';
      j = 0;
      while (j < n)
	{
	  if (buffer[j] == '\n')
	    {
	      src[i] = '\0';
	      return (src);
	    }
	  src[i++] = buffer[j++];
	}
    }
  return (put_last_line(n, i, src));
}

char		*get_next_line(const int fd)
{
  static char	buffer[MY_ABS(NBR_READ) + 1];
  static char	*src;
  int		i;
  int		j;

  i = 0;
  j = 0;
  src = malloc((NBR_READ + 1) * sizeof(*src));
  if (src == NULL || end == 1)
    return (NULL);
  if (M)
    {
      while (buffer[j] != '\0')
	{
	  if (buffer[j] == '\n')
	    {
	      j = j + 1;
	      while (buffer[j] != '\0')
		src[i++] = buffer[j++];
	    }
	  j = j + 1;
	}
    }
  return (put_line(i, fd, buffer, src));
}
