
//#include <stddef.h>
#include <stdio.h>

//void *memset(void *b, int c, size_t len);
//void *ft_memset(char *ptr, int value, int num)

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char   *str;
    int i;

    str = b;
    i = 0;
    while (i < len)
    {
        str[i] = c;
        i++;
    }
}
/*
int main()
{
    char str[5];
    ft_memset(str, 75, sizeof(str));
    
    for (int i = 0; str[i]; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}*/