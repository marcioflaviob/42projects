
char *strrchr(const char *s, int c)
{
    int i;
    int last;

    i = 0;
    last = 0;
    while (s[i])
    {
        if (s[i] == c)
            last = i;
        i++;
    }
    return (last == 0 ? 0 : (s + last));
}