/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-cast <ide-cast@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:33:30 by ide-cast          #+#    #+#             */
/*   Updated: 2024/06/13 13:33:35 by ide-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] == s2[a] && (s1[a] != '\0' && s2[a] != '\0'))
	{
		a++;
	}
	return (s1[a] - s2[a]);
}
/*
int	main(void)
{
	char	s1[] = "Hello WorA";
	char	s2[] = "Hello Wora";
	char	retorno;

	retorno = ft_strcmp(s1, s2);
	printf("%d\n", retorno);
}*/
