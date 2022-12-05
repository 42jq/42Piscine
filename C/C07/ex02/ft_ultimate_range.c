/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:20:13 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/12 21:03:51 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	len = max - min;
	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * len);
	if (!range)
		return (-1);
	while (i < len)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	*sample[0];
	int	size;

	size = ft_ultimate_range(&sample[0], -25, 150);
	ft_ultimate_range(&sample[0], -25, 150);
	printf("%d\n", size);
	i = 0;
	while (i < 150 + 25)
	{
		printf("%d ", sample[0][i]);
		i++;
	}
	return (0);
}*/
