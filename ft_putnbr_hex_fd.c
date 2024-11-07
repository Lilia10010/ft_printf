
#include "ft_printf.h"
void ft_putnbr_hex_fd(uintptr_t n, int fd)
{
	char *hex_digits;

	hex_digits = "0123456789abcdef";
	if (n >= 16)
		ft_putnbr_hex_fd(n / 16, fd);
	ft_putchar_fd(hex_digits[n % 16], fd);
}