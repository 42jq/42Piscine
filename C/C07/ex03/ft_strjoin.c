/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:20:34 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/12 21:35:42 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strslen(int size, char **strs)
{
	int	senlen;
	int	i;

	senlen = 0;
	i = 0;
	while (i < size)
	{
		senlen += ft_strlen(strs[i]);
		i++;
	}
	return (senlen);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		senlen;
	int		point;
	int		i;

	senlen = ft_strslen(size, strs);
	point = senlen + (size - 1) * ft_strlen(sep) + 1;
	if (size >= 1)
		res = (char *)malloc(sizeof(char) * point);
	else
		res = (char *)malloc(sizeof(char));
	i = 0;
	res[0] = '\0';
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i != size - 1)
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}
/*

#include <stdio.h>
int	main(void)
{
	char	*strs[4];
	char	*sep;
	int		size;

	size = 4;
	strs[0] = "primeira";
	strs[1] = "segunda";
	strs[2] = "terceira";
	strs[3] = "quarta";
	sep = "-";
	printf("%s\n", ft_strjoin(size, strs, sep));
	free(ft_strjoin(size, strs, sep));
}


//Write a function that will concatenate all
//the strings pointed by strs separated by
//sep.
//size is the number of strings in strs
//if size is 0, you must return an empty
//string that you can free()
*/
