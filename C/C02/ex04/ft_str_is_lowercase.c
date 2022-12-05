/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 03:25:22 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/04 13:41:23 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
    char str3[] = "gtftfyAAAA";
    char str4[] = "	";
    char str5[] = ".gtftfy";

	printf("Tem de dar 0 e da %d\n", ft_str_is_lowercase(str));
	printf("Tem de dar 1 e da %d\n", ft_str_is_lowercase(str1));
	printf("Tem de dar 1 e da %d\n", ft_str_is_lowercase(str2));
	printf("Tem de dar 0 e da %d\n", ft_str_is_lowercase(str3));
	printf("Tem de dar 0 e da %d\n", ft_str_is_lowercase(str4));
	printf("Tem de dar 0 e da %d\n", ft_str_is_lowercase(str5));
}

// man islowerThe islower() and islower_l() functions shall
//  return non-zero if c is a lowercase letter; otherwise, they shall return 0
*/
