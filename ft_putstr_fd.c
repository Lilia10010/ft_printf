
#include "ft_printf.h"

void ft_putstr_fd(char *str, int fd)
{
  while (*str)
  {
    ft_putchar_fd(*str, fd);
    ++str;
  }
}