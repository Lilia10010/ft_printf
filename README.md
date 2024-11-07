# ft_printf

## Propósito

O propósito deste projeto é criar uma função `ft_printf` que imita o comportamento da função `printf` da biblioteca padrão do C. A função `ft_printf` deve ser capaz de imprimir diferentes tipos de dados formatados de acordo com especificadores de formato.

## Especificadores de Formato

A tabela a seguir descreve os especificadores de formato suportados pela função `ft_printf`:

| Especificador | Descrição                                                                 |
| ------------- | ------------------------------------------------------------------------- |
| `%c`          | Imprime um único caractere.                                               |
| `%s`          | Imprime uma string (conforme definido pela convenção comum do C).         |
| `%p`          | O endereço do ponteiro `void *` deve ser impresso em formato hexadecimal. |
| `%d`          | Imprime um número decimal (base 10).                                      |
| `%i`          | Imprime um inteiro em base 10.                                            |
| `%u`          | Imprime um número decimal (base 10) sem sinal.                            |
| `%x`          | Imprime um número em formato hexadecimal (base 16) em minúsculas.         |
| `%X`          | Imprime um número em formato hexadecimal (base 16) em maiúsculas.         |
| `%%`          | Imprime um sinal de porcentagem.                                          |
