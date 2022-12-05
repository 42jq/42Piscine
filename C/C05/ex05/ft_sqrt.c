/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:52:51 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/08 21:52:55 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	nbsqrt;

	nbsqrt = nb;
	if (nbsqrt <= 0)
		return (0);
	if (nbsqrt == 1)
		return (1);
	i = 2;
	if (nbsqrt >= 2)
	{
		while (i * i <= nbsqrt)
		{
			if (i * i == nbsqrt)
			{
				return (i);
			}
		i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(0));
}
*/
