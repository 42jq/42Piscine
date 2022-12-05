/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 03:23:12 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/04 13:40:12 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned int size;

	size = 10;
	char	src[]  = "000000789";
	char	dest[] = "123456";
	//printf("%s\n", strncpy(dest, src, size));
	printf("%s\n", ft_strncpy(dest, src, size));
	printf("nova dest = %s e a nova src = %s \n", dest, src);
	return (0);
}
*/
