/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 03:23:54 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/04 13:54:50 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			return (0);
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

	printf("Tem de dar 0 e da %d\n", ft_str_is_alpha(str));
	printf("Tem de dar 1 e da %d\n", ft_str_is_alpha(str1));
	printf("Tem de dar 1 e da %d\n", ft_str_is_alpha(str2));
	printf("Tem de dar 0 e da %d\n", ft_str_is_alpha(str3));
	printf("Tem de dar 0 e da %d\n", ft_str_is_alpha(str4));
	printf("Tem de dar 0 e da %d\n", ft_str_is_alpha(str5));
}

// man iswalpha The wide-character class "alpha" always contains
// at least the letters 'A' to 'Z' and 'a' to 'z'
*/
