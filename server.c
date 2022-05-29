#include "minitalk.h"
static int glo = 7;

int	change_to_decimal(char *bit)
{
	int decimal;
	int i;

    i = 0;
    decimal = 0;
    while(bit[i])
    {
        decimal += (bit[i] - '0') * power(2, i);
        i++;
    }
    return (decimal);
}
void	combiner(int glo,char *bit,int s) 
{
    int decimal;

    if (s == SIGUSR1)
        bit[glo] = '1';
    else
        bit[glo] = '0';
    if (glo == 0)
    {
        bit[8] = '\0';
        decimal = change_to_decimal(bit);
        ft_putchar(decimal);
    }
}

void    sig_hand(int signal)
{   
    static char bit[8];

    if (glo == 7)
        ft_memset(bit, '0', 8);

    combiner(glo, bit, signal);
    if (glo == 0)
        glo = 8;
    glo--;
}
int main(){

    ft_putnbr(getpid());
    ft_putchar('\n');
    signal(SIGUSR1, sig_hand);
    signal(SIGUSR2, sig_hand);
    while(1)
        usleep(200);

}