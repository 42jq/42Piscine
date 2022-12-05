/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:04:51 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/08 17:27:15 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
	i = 1;
	result = 1;
		while (i <= nb)
		{
			result *= i;
			i++;
		}
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
}
*/
