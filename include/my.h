/*
** my.h for my.h in /home/simomb_s/Piscine_C_J09/include
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Oct  9 15:26:53 2014 stephanedarcy simomba
** Last update Mon Jan 26 16:20:09 2015 stephanedarcy simomba
*/
#ifndef __MY_H__
# define __MY_H__

#include <stdarg.h>
#include <sys/stat.h>
#include <unistd.h>

# define MY_NBR(x) (((x) >= 65 && (x) <= 90) ? ((x) + 31) : (x))

void	my_putchar(char);
void	my_puterror(char*);
int	my_isneg(int);
int	my_put_nbr(int);
int	my_swap(int*, int*);
int	my_putstr(char*);
int	my_strlen(char*);
int	my_getnbr(const char*);
void	my_sort_int_tab(int*, int);
int	my_power_rec(int, int);
int	my_quare_root(int);
int	my_is_prime(int);
int	my_find_prime_sup(int);
char	*my_strcpy(char*, char*);
char	*my_strncpy(char*, char*, int);
char	*my_revstr(char*);
char	*my_strstr(char*, char*);
int	my_strcmp(char*, char*);
int	my_strncmp(char*, char*, int);
char	*my_strupcase(char*);
char	*my_strlowcase(char*);
char	*my_strcapitalize(char*);
int	my_str_isalpha(char*);
int	my_str_isnum(char*);
int	my_str_islower(char*);
int	my_str_isupper(char*);
int	my_str_isprintable(char*);
int	my_showstr(char*);
int	my_showmem(char*, int);
char	*my_strcat(char*, char*);
char	*my_strncat(char*, char*, int);
int	my_strlcat(char*, char*, int);
int	my_putstring(char *str);
int	my_putnbr_base(int nbr, char *base);
int	my_printf(const char *format, ...);
int	flag_b(int i, va_list ap);
int     flag_c(int i, va_list ap);
int     flag_d(int i, va_list ap);
int     flag_ld(int i, va_list ap);
int     flag_lu(int i, va_list ap);
int     flag_p(int i, va_list ap);
int     flag_s(int i, va_list ap);
int     flag_S(int i, va_list ap);
int     flag_x(int i, va_list ap);
int     flag_X(int i, va_list ap);
int	count_file(char *chemin);
char	**word_tab(char *chemin);
int	user_access(struct stat sb);
int	groupe_access(struct stat sb);
int	others_access(struct stat sb);
int	my_file_detailed(char *str);
char	my_type(struct stat sb);
int	my_ls(char *chemin);
int	my_ls_l(char *chemin);
int	my_ls_d(char *chemin);
int	my_ls_ld(char *chemin);
int     my_ls_r(char *chemin);
int     my_ls_rl(char *chemin);
char	**word_tab(char *chemin);
char	**trie_tab_croissant(char **tab, int nbr_file);
char    **trie_tab_decroissant(char **tab, int nbr_file);
int	count_file(char *chemin);
char    **my_function(char **tab, int nbr_file, int i, int j);
char    **my_func(char **tab, int nbr_file, int i, int j);
char	*my_str(char *str, char *src);
char	*check_argv(char *str);
char	*my_strdup(char *str);
int	gere_file(char *chemin);

#endif /* __MY_H__ */
