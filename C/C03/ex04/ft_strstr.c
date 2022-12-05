/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:58:37 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/03 20:07:16 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
		j++;
		}
	i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char to_find[] = "Encontra";
    char nula[] = "";
    char str[] = "para substutuir Encontra nesta frase";
    char str1[] = "para substutuir nesta frase";
    char str2[] = "";
    printf("%s\n", ft_strstr(str1, to_find));
    printf("%s\n", ft_strstr(str2, nula));
    printf("%s\n", strstr(str2, to_find));
    printf("%s\n", strstr(str, nula));    

// These functions return a pointer to the beginning of the located
//       substring, or NULL if the substring is not found.
//       If needle is the empty string, the return value is always
//       haystack itself.
}
*/
