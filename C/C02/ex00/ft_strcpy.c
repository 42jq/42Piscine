/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 01:48:59 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/04 13:39:53 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[]  = "123456";
	char	dest[] = "12345";

    //printf("%s\n", strcpy(dest, src));
	printf("%s\n", ft_strcpy(dest,src));
	printf("nova dest = %s e a nova src = %s \n", dest, src);

	return (0);
	
//The strcpy() function copies the string pointed by source
//(including the null character) to the destination.
//The strcpy() function also returns the copied string
}
*/
