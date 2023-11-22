/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:04:03 by mbrandao          #+#    #+#             */
/*   Updated: 2023/11/22 12:04:05 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	ft_isalpha(int a)
{
	if ((a < 65) || (a > 90))
	{
		if ((a < 97) || (a > 122))
			return (0);
	}
	return (1);
}

static int	ft_isdigit(int a)
{
	if ((a < 48) || (a > 57))
		return (0);
	else
		return (1);
}

int	ft_isalnum(int c)
{
	if (!(ft_isalpha(c)) && !(ft_isdigit(c)))
		return (0);
	else
		return (1);
}

int	main()
{
	char c = 'a';
	printf("%d", ft_isalnum(c));
}