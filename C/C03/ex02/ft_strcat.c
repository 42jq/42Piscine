/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:26:38 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/03 19:47:49 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "Este e o dest e ";
    char str2[] = "este e o src para teste";
    char str3[] = "Este e o dest e ";
    char str4[] = "este e o src para teste";  
    
    printf("%s\n", ft_strcat(str1, str2));
    //test only one because the pointer change
    printf("%s\n", strcat(str3, str4));
    return (0);
}

// The strcat() and strncat() functions return a pointer to the
//     resulting string dest.
// If src contains n or more bytes, strncat() writes n+1 bytes to
// dest (n from src plus the terminating null byte).  Therefore, the
//  size of dest must be at least strlen(dest)+n+1.
*/
