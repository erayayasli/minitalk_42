#include "minitalk.h"



void change_to_binary(char a,char *array)
{
    int i = 7;
    array[8] = '\0';
    while(i != -1)
    {
        array[i] = (a % 2) + '0';
        a = a / 2;
        i--;
    }
}
int power(int a, int b)
{
    int c = 1;
    while(b)
    {
        c *= a;
        b--;
    }
    return (c);
}

