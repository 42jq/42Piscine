/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:26:16 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/03 19:45:16 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) && i < n - 1)
	{
		i++;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
/*
#include <stdio.h>
#include <string.h>
   
int main(void)
{
    int n;
    char str1[] = "Porto";
    char str2[] = "Lisboa";
    char str3[] = "Portugal";
    
    n = 4,
    printf("Resultado str1 e str 2i pela ");
    printf("ft_strncmp = %d\n", ft_strncmp(str1, str2, n));
    printf("Resultado str1 e str 2 pela ");
    printf("strncmp = %d\n\n",  strncmp(str1, str2, n));
    printf("Resultado str1 e str 3 pela ");
    printf("ft_strncmp = %d\n", ft_strncmp(str1, str3, n));
    printf("Resultado str1 e str 3 pela ");
    printf("strncmp = %d\n\n",  strncmp(str1, str3, n));
    return (0);
}

// The strcmp() and strncmp() functions return an integer less than,
// equal to, or greater than zero if s1 (or the first n bytes
// thereof) is found, respectively, to be less than, to match, or be
// greater than s2.
*/
