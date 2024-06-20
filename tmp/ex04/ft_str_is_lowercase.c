/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 01:51:38 by yibrahim          #+#    #+#             */
/*   Updated: 2024/06/20 16:11:16 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int	main()
{
	char str1[] = "hola";
	char str2[] = "Hola";
	char str3[] = "";
	
	printf("Test 1: %d\n", ft_str_is_lowercase(str1));
	printf("Test 2: %d\n", ft_str_is_lowercase(str2));
	printf("Test 3: %d\n", ft_str_is_lowercase(str3));
	
	return (0);
}*/
