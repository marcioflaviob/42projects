
#include <stdio.h>
#include <stdlib.h>


static int	ft_isdigit(int a)
{
	if ((a < 48) || (a > 57))
		return (0);
	else
		return (1);
}

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == ' ')
        i++;
    if (str[i] == '-' || str[i] == '+')
        sign = (str[i++] == '-' ? -1 : 1);
    while (ft_isdigit(str[i]))
        result = (result * 10) + (str[i++] - 48);
    return (result * sign);
}
/*
int main(int argc, char *argv[])
{
    (void) argc;
    int a = ft_atoi(argv[1]);
    int b = atoi(argv[1]);
    printf("%d, %d", a, b);
    return 0;
}*/