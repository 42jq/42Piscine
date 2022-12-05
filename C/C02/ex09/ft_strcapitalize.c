/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 03:27:41 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/04 13:43:10 by jamendoe         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capital;

	ft_strlowcase(str);
	capital = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (capital == 1)
			{
				str[i] = str[i] - 32;
				capital = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			capital = 0;
		else
			capital = 1;
	i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
    char str1[] = "";
	char str2[] = "OI, TUDO BEM? 42PALAVRAS QUARENTA-E-DUAS;CINQUENTA+E+UM";
    char str3[] = "TFYTFYFbhbhbh6575tyfytfy";
    char str4[] = "	";
    char str5[] = ".gtftf6575tyfytfy";

	printf("Tem de dar 0 e da %s\n", ft_strcapitalize(str));
	printf("Tem de dar 1 e da %s\n", ft_strcapitalize(str1));
	printf("Tem de dar 1 e da %s\n", ft_strcapitalize(str2));
	printf("Tem de dar 0 e da %s\n", ft_strcapitalize(str3));
	printf("Tem de dar 0 e da %s\n", ft_strcapitalize(str4));
	printf("Tem de dar 0 e da %s\n", ft_strcapitalize(str5));
}
*/
