/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 13:34:37 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/16 13:34:40 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i <= n)
		i++;
	if (i <= n && s1[i] || s2[i])
		return ((int)(s1[i] - s2[i]));
	return (0);
}
/*
int	main(void)
{
	char *s1;
	char *s2;
	unsigned int n;
	
	s1 = "hola";
	s2 = "holo";
	n = 0;
	printf("%i", ft_strncmp(s1, s2, n));
	return (1);
}*/
