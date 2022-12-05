/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:50:31 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/08 16:23:54 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] != '\0' && (str[i] == 32
			|| (str[i] >= '\t' && str[i] <= '\r')))
		i++;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
	i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int main ()
{
	char str[] = " ---+--+1234ab567";
	printf("%d", ft_atoi(str));
}
//
//
//       isspace()
//             checks for white-space characters.  In the "C" and  "POSIX"  lo‐
//             cales,  these are: space, form-feed ('\f'), newline ('\n'), car‐
//             riage return ('\r'), horizontal tab  ('\t'),  and  vertical  tab
//              ('\v').
//
//		32 (' ') 12 ('\f') 10 ('\n') 13 ('\r') 9 ('\t') 11 ('\v')
*/
