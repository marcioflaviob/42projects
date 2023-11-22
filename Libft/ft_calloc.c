

#include <stdlib.h>

static void    ft_bzero(void *s, size_t n)
{
    unsigned char   *str;
    size_t i;

    str = s;
    i = 0;
    while(i < n)
    {
        str[i++] = 0;
    }
}

void    *ft_calloc(size_t count, size_t size)
{
    size_t  totalsize;
    void    *arr;

    if (count == 0 || size == 0)
		return (NULL);
    totalsize = count * size;
    arr = (void *) malloc(totalsize);
    if (arr == NULL)
        return (NULL);
    ft_bzero(arr, count);
    return (arr);
}