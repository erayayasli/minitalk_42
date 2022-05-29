#ifndef MINITALK_H
#define MINITALK_H
#include <unistd.h>
#include <signal.h>

void	ft_putchar(char x);
void	ft_putnbr(int nb);
int     ft_atoi(const char *str);
void    bit_gonder(int pid,char *word);
void    change_to_binary(char a,char *array);
void    send_signal(int pid,char *bit);
void    sig_hand(int signal);
void    combiner(int glo,char *bit,int s);
void    *ft_memset(void *b, int c, size_t len);
int     change_to_decimal(char *bit);
int	    printchar(char a);
int     printnbr(int a);
int	    printstr(const char *str);
int     power(int a, int b);

#endif