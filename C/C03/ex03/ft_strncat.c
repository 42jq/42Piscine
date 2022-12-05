/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:27:00 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/03 19:50:14 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
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
    unsigned int nb;
    char str1[] = "Este e o dest e ";
    char str2[] = "este e o src para teste";
    char str3[] = "Este e o dest e ";
    char str4[] = "este e o src para teste";  
    
    nb = 6;
    printf("%s\n", ft_strncat(str1, str2, nb));
    
    printf("%s\n", strncat(str3, str4, nb));
    return (0);
}

// The strcat() and strncat() functions return a pointer to the
//     resulting string dest.
// If src contains n or more bytes, strncat() writes n+1 bytes to
// dest (n from src plus the terminating null byte).  Therefore, the
//  size of dest must be at least strlen(dest)+n+1.
*/
