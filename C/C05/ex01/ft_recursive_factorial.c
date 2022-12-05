/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:28:28 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/08 19:59:14 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		result = 1;
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_factorial(3));
}
*/
