/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 03:26:21 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/04 13:42:11 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "6749\t6768";
    char str1[] = "";
	char str2[] = "ghgf6hg";
    char str3[] = "TFYTFYFbhbhbh65\n75tyfytfy";
    char str4[] = "	";
    char str5[] = ".gtftf6575tyfytfy\b";

	printf("Tem de dar 0 e da %d\n", ft_str_is_printable(str));
	printf("Tem de dar 1 e da %d\n", ft_str_is_printable(str1));
	printf("Tem de dar 1 e da %d\n", ft_str_is_printable(str2));
	printf("Tem de dar 0 e da %d\n", ft_str_is_printable(str3));
	printf("Tem de dar 0 e da %d\n", ft_str_is_printable(str4));
	printf("Tem de dar 0 e da %d\n", ft_str_is_printable(str5));
}

// man iswalpha The wide-character class "alpha" always contains
// at least the letters 'A' to 'Z' and 'a' to 'z'
*/
