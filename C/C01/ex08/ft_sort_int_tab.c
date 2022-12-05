/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:38:16 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/02 00:27:42 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	while (size >= 0)
	{
	i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab [i + 1])
			{
				tmp = tab [i];
				tab[i] = tab [i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
	size--;
	}
}
/*
int	main(void)
{
	int	m[5] = {8, 4, 6, 2, 7};
	int	size;

	size = 5;
	ft_sort_int_tab(m, size);
	printf(" a matriz ordenada e:%d, %d, ", m[0], m[1]);
	printf("%d, %d, %d", m[2], m[3], m[4]);
}*/
