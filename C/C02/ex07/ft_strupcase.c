/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 03:26:49 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/04 13:42:35 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		else
		{
			i++;
		}
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "67496768";
        char str1[] = "";
	char str2[] = "ghgfhg";
        char str3[] = "TFYTFYFbhbhbh6575tyfytfy";
        char str4[] = "	";
        char str5[] = ".gtftf6575tyfytfy";

	printf("%s\n", ft_strupcase(str));
	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
	printf("%s\n", ft_strupcase(str3));
	printf("%s\n", ft_strupcase(str4));
	printf("%s\n", ft_strupcase(str5));
	return (0);
}

// man iswalpha The wide-character class "alpha" always contains
// at least the letters 'A' to 'Z' and 'a' to 'z'
*/
