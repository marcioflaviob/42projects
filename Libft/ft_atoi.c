/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:40:36 by mbrandao          #+#    #+#             */
/*   Updated: 2023/11/22 11:57:33 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>


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
    while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
        sign = (str[i++] == '-' ? -1 : 1);
    while (ft_isdigit(str[i]))
        result = (result * 10) + (str[i++] - 48);
    return (result * sign);
}
/*
int main()
{
	char escape[] = {9, 10, 11, 12, 13, 0};
	string e(escape); //Nao funciona :(
	
	printf("Original : %d\n", atoi(e + "1"));
	printf("Copie : %d\n", ft_atoi(e + "1"));
    return (0);
}


int main(int argc, char *argv[])
{
    (void) argc;
    int a = ft_atoi(argv[1]);
    int b = atoi(argv[1]);
    printf("%d, %d", a, b);
    return 0;
}*/