/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:35:33 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/01 17:05:56 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	printf("o a=%d e o b=%d", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("o a=%d e o b=%d", a, b);
}*/
