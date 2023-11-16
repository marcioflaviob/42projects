

#include<stdio.h>

void *ft_memset(char *ptr, int value, int num)
{
    int i;

    i = 0;
    while (i < num)
    {
        ptr[i] = value;
        i++;
    }
}

int main()
{
    char str[5];
    ft_memset(str, 75, 3);
    
    for (int i = 0; str[i]; i++)
    {
        printf("%c", str[i]);
    }
    

    return 0;
}