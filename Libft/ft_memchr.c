

#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n) {
    size_t  i;
    const unsigned char *us = s;
    unsigned char uc = (unsigned char)c;

    i = 0;
    while (i < n)
    {
        if (us[i] == uc)
        {
            return (void *)(us + i);
        }
        i++;
    }
    return NULL;
}