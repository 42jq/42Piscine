/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 03:25:50 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/04 13:41:42 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
#include <string.h>

int main(void)
{
	char str[] = "67496768";
        char str1[] = "";
	char str2[] = "YUFRBIIUHUH";
        char str3[] = "gtftfyAAAA";
        char str4[] = "	";
        char str5[] = ".gtftfy";

	printf("Tem de dar 0 e da %d\n", ft_str_is_uppercase(str));
	printf("Tem de dar 1 e da %d\n", ft_str_is_uppercase(str1));
	printf("Tem de dar 1 e da %d\n", ft_str_is_uppercase(str2));
	printf("Tem de dar 0 e da %d\n", ft_str_is_uppercase(str3));
	printf("Tem de dar 0 e da %d\n", ft_str_is_uppercase(str4));
	printf("Tem de dar 0 e da %d\n", ft_str_is_uppercase(str5));
}

// man islowerThe islower() and islower_l() functions shall
//  return non-zero if c is a lowercase letter; otherwise, they shall return 0
*/
