

#include <stddef.h>

int my_memcmp(const void *s1, const void *s2, size_t n) {
    size_t  i;
    const unsigned char *c1 = s1;
    const unsigned char *c2 = s2;

    i = 0;
    while (i < n)
    {
        if (c1[i] != c2[i])
        {
            return c1[i] - c2[i];
        }
        i++;
    }
    return 0;
}