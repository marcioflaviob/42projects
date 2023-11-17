

#include <unistd.h>

static void ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
}

void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i])
        ft_putchar_fd(s[i++], fd);
}
/*
int main() {
    ft_putstr_fd("testing", 1);
}*/