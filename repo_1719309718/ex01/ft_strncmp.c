/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoherre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:31:01 by igoherre          #+#    #+#             */
/*   Updated: 2024/06/19 16:31:03 by igoherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
	{
		if (s1[i] != '\0')
			return (s1[i]);
		if (s2[i] != '\0')
			return (-s2[i]);
	}
	return (s1[i] - s2[i]);
}
/*
int	main(int argc, char *argv[])
{
	if (argc > 3)
	{
		printf("%i", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	}
	return (0);
}
*/
