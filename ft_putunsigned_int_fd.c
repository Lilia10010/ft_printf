
#include "ft_printf.h"

void ft_putuint_fd(int n, int fd)
{
	if (n / 10)
		ft_putuint_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}