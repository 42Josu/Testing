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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
		return (0);
	while (s1[i] == s2[i] && n > i)
		i++;
	if (s1[i] && s2[i])
		if ((s1[i] - s2[i]) > 0)
			return (+1);
		else if ((s1[i] - s2[i]) < 0)
			return (-1);
		else
			return (0);
	else if (s1[i])
		return (+1);
	else if (s2[i])
		return (-1);
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
