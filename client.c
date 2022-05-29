#include "minitalk.h"
int main(int argc, char **argv){

    int pid;
    int i;
    (void)pid;
    i = 0;
    if(argc == 3)
    {   
        pid = ft_atoi(argv[1]);
        while(argv[2][i])
        {
            char bit[8];
            change_to_binary(argv[2][i],bit);
            send_signal(pid,bit);
            i++;
        }    
    
    }
    else
    {
        write(1,"hata",4);
        exit(0);
    }
}
void    send_signal(int pid,char *bit)
{
    int i;

    i = 0;
    while(bit[i])
    {
        if (bit[i] == '0')
            kill(pid, SIGUSR2);
        else
            kill(pid, SIGUSR1);
        i++;
        usleep(200);
    }
}