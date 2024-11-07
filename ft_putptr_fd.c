
#include "ft_printf.h"

static void ft_putnbr_hex(uintptr_t n, int fd)
{
	char *hex_digits;

	hex_digits = "0123456789abcdef";
	if (n >= 16)
		ft_putnbr_hex(n / 16, fd);
	ft_putchar_fd(hex_digits[n % 16], fd);
}

void ft_putptr_fd(void *ptr, int fd)
{
  //converter para um n inteiro
  uintptr_t address = (uintptr_t)ptr;
  ft_putstr_fd("0x", fd);
  ft_putnbr_hex(address, fd);
}