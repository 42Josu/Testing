/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoherre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:40:24 by igoherre          #+#    #+#             */
/*   Updated: 2024/06/20 11:40:26 by igoherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sizeof(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i_find;

	i = 0;
	i_find = 0;
	while (str[i] != '\0')
	{
		i_find = 0;
		while (str[i + i_find] == to_find[i_find])
		{
			i_find++;
		}
		if (to_find[i_find] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char	str[50] = "Hola Mundo aloH";
	char	to_find[] = "undo";
	
	printf("%s", ft_strstr(str, to_find));
	return (0);
}
*/
