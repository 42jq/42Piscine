/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:34:48 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/01 17:07:11 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}	
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	*div;
	int	*mod;

	div = &x;
	mod = &y;
	x = 7;
	y = 5;
	printf("o x =%d, o y=%d, o div=%d e o mod=%d\n", x, y, *div, *mod);
	ft_div_mod(x, y, div, mod);
	printf("o x =%d, o y=%d, o div=%d e o mod=%d\n", x, y, *div, *mod);
	return (0);
}*/
