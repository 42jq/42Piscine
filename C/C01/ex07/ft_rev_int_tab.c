/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 22:13:23 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/01 22:24:00 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}
/*
int	main(void)
{
	int	m[5] = {8, 4, 6, 2, 1};
	int	size;

	size = 5;
	ft_rev_int_tab(m, size);
	printf(" a matriz revertida e: %d, %d, ", m[0], m[1]);
	printf("%d, %d, %d, m[2], m[3], m[4]);
}*/
