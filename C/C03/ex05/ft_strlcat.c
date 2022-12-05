/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:27:32 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/04 18:06:32 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_ori_len;
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	dest_len;

	dest_ori_len = ft_strlen(dest);
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	i = 0;
	while (src[i] != '\0' && dest_len < (size - 1))
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest_ori_len + src_len);
}
/*
#include <stdio.h>

int main (void)
{
	char src[] = "1234567890";
    char dest[] = "12345";
    printf("%i \n", ft_strlcat(dest, src, 20));
    printf("%s \n", dest);
}
*/
