
char *ft_strrchr(const char *s, int c)
{
    unsigned char ch;
    int i;
    int last;

    ch = c;
    i = 0;
    last = -1;
    while (s[i])
    {
        if (s[i] == ch)
            last = i;
        i++;
    }
    if (c == 0)
        return ((char *) (s + i));
    return ((char *) (last == -1 ? 0 : (s + last)));
}