
char *ft_strchr(const char *s, int c)
{
    unsigned char ch;
    int i;

    ch = c;
    i = 0;
    while (s[i])
    {
        if (s[i] == ch)
            return ((char *) (s + i));
        i++;
    }
    if (ch == 0)
        return ((char *) (s + i));
    return (0);
}