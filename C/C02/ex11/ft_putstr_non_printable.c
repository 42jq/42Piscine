/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:09:49 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/04 23:48:12 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*pdest;

	pdest = dest;
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	return (pdest);
}

void	ft_putstr_non_printable(char *str)
{
	char	hexch[16];
	int		c;

	ft_strcpy(hexch, "0123456789abcdef");
	while (*str != '\0')
	{
		c = *str++;
		if (ft_char_is_printable(c) == 1)
			ft_putchar(c);
		else
		{
			ft_putchar('\\');
			ft_putchar(hexch[c / 16]);
			ft_putchar(hexch[c % 16]);
		}
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("teste da quebra de linha \n e do tab \t aqui\n");
	ft_putstr_non_printable("");
}
*/
