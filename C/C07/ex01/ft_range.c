/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:19:51 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/10 19:37:58 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (range == NULL)
		return (NULL);
	if (min >= max)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = i + min;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>
int	main(void)
{
	int *range;
	int i;

	
	range = ft_range(-56, 87);
	i = 0;
	while(i < 87 + 56)
	{
	printf("%d ", range[i]);
	i++;
	}
	free(range);
}*/
