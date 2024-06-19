/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 13:37:24 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/16 13:45:44 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;
	unsigned int	m;

	i = 0;
	n = 0;
	m = 0;
	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0')
		n++;
	while (n >= m && m <= size)
	{
		dest[i + m] = src[m];
		m++;
	}
	return ((unsigned int)(i + m));
}
/*
int main ()
{
	char *a;
	char *b;
	unsigned int c;

	a = "aaas";
	b = "fge";
	c = 60;
	printf("%i", ft_strlcat(a, b, c));
	return 1;
}*/