
#include "ft_printf.h"

void ft_putnbr_hex_fd(unsigned int n, int fd, int is_upper)
{
	char *base;

    if (is_upper)
        base = "0123456789ABCDEF";
    else
        base = "0123456789abcdef";

    if (n >= 16)
        ft_putnbr_hex_fd(n / 16, fd, is_upper);
    write(fd, &base[n % 16], 1);
	/* char *hex_lower;
	char *hex_upper;

	hex_lower = "0123456789abcdef";z
	hex_upper = "0123456789ABCDEF";

	if (n >= 16)
		ft_putnbr_hex_fd(n / 16, fd);
	ft_putchar_fd(is_upper ? hex_upper[n % 16] : hex_lower[n % 16], fd); */
}