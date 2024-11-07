#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

#include <stdio.h>
#include <unistd.h>
#include <stdint.h>

int 	ft_printf(const char *format, ...);
void	ft_putchar_fd(char c, int fd);
void    ft_putnbr_fd(int n, int fd);

void	ft_putptr_fd(void *ptr, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putuint_fd(int n, int fd);
void  ft_putnbr_hex_fd(unsigned int n, int fd, int is_upper);

#endif
