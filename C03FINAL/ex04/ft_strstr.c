/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 13:36:57 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/16 13:45:13 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
			while (str[i + n] == to_find[n] && to_find[n] != '\0')
				n++;
		if (to_find[n] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int main () 
{
	char *a;
	char *b;

	a = "hola qputos, que tal todo";
	b = "que";
	printf("%s", ft_strstr(a, b));
	a = "hola qputos, que tal todo";
	b = "quo";
	printf("%s", ft_strstr(a, b));
	return 1;
}*/