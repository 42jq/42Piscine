/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:25:43 by jamendoe          #+#    #+#             */
/*   Updated: 2022/10/03 19:34:42 by jamendoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "Porto";
    char str2[] = "Lisboa";
    
    printf("Resultado pela ft_strcmp = %d\n", ft_strcmp(str1, str2));
    printf("Resultado pela strcmp = %d\n",  strcmp(str1, str2));
    return (0);
}

//       The strcmp() function compares the two strings s1 and s2.  The
//       locale is not taken into account (for a locale-aware comparison,
//       see strcoll(3)).  The comparison is done using unsigned
//       characters.
//
//       strcmp() returns an integer indicating the result of the
//       comparison, as follows:
//
//       • 0, if the s1 and s2 are equal;
//
//       • a negative value if s1 is less than s2;
//
//       • a positive value if s1 is greater than s2.
//
//       The strncmp() function is similar, except it compares only the
//       first (at most) n bytes of s1 and s2.
*/
