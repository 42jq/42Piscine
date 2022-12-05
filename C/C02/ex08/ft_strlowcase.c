/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 03:27:17 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/04 13:42:55 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
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

	printf("%s\n", ft_strlowcase(str));
	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strlowcase(str2));
	printf("%s\n", ft_strlowcase(str3));
	printf("%s\n", ft_strlowcase(str4));
	printf("%s\n", ft_strlowcase(str5));
	return (0);
}
*/
