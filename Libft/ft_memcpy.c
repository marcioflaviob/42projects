

#include <stddef.h>

void *ft_memcpy(void *dst, const void *src, size_t n) {
    size_t  i;
    char *char_dest = dst;
    const char *char_src = src;

    i = 0;
    while (i < n)
    {
        char_dest[i] = char_src[i];
        i++;
    }
    return dst;
}