/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-cast <ide-cast@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:05:17 by ide-cast          #+#    #+#             */
/*   Updated: 2024/06/13 14:05:19 by ide-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while ((s1[a] == s2[a] && (s1[a] != '\0' && s2[a] != '\0')) && (a < n))
	{
		a++;
	}
	return (s1[a] - s2[a]);
}
/*int	main(void)
{
	char	s1[] = "Hello asdsasda";
	char	s2[] = "Hell safzzxc";
	char	retorno;

	retorno = ft_strncmp(s1, s2, 5);
	printf("%d\n", retorno);
}*/
