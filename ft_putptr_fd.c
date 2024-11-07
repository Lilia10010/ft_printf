
#include "ft_printf.h"

void ft_putptr_fd(void *ptr, int fd)
{
  //converter para um n inteiro
  uintptr_t address = (uintptr_t)ptr;
  ft_putstr_fd("0x", fd);
  ft_putnbr_hex_fd(address, fd);
}