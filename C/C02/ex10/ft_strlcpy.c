/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:34:04 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/04 13:43:28 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(src);
	j = 0;
	if (size != 0)
	{
		while (src[j] != '\0' && j < (size - 1))
		{
			dest[j] = src [j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
	unsigned int size;
	size = 20;
	char src[] = "0123456789";
	char dest[] = "12345678";
	printf("%d e o dest passa a ser %s\n", ft_strlcpy(dest, src, size), dest);
}
*/
