/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 03:24:26 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/04 13:41:01 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	char str[] = "67496768";
        char str1[] = "";
	char str2[] = "ghgfhg";
        char str3[] = "TFYTFYFbhbhbh6575tyfytfy";
        char str4[] = "	";
        char str5[] = ".gtftf6575tyfytfy";

	printf("Tem de dar 1 e da %d\n", ft_str_is_numeric(str));
	printf("Tem de dar 1 e da %d\n", ft_str_is_numeric(str1));
	printf("Tem de dar 0 e da %d\n", ft_str_is_numeric(str2));
	printf("Tem de dar 0 e da %d\n", ft_str_is_numeric(str3));
	printf("Tem de dar 0 e da %d\n", ft_str_is_numeric(str4));
	printf("Tem de dar 0 e da %d\n", ft_str_is_numeric(str5));
}

// man isdigit he isdigit() and isdigit_l() functions shall return non-zero if
//       c is a decimal digit; otherwise, they shall return 0.
*/
