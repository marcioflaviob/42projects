

#include <stddef.h>

void    bzero(void *s, size_t n)
{
    unsigned char   *str;
    int i;

    str = s;
    i = 0;
    while(i < n)
    {
        str[i++] = 0;
    }
}