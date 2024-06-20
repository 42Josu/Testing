/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 02:19:11 by yibrahim          #+#    #+#             */
/*   Updated: 2024/06/20 16:18:27 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = (0);
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int     main(void)
{
	char str1[] = "HOLA";
	char str2[] = "hola";
	char str3[] = "";

	printf("Test 1: %d\n", ft_str_is_uppercase(str1));
	printf("Test 2: %d\n", ft_str_is_uppercase(str2));
	printf("Test 3: %d\n", ft_str_is_uppercase(str3));

	return (0);
}*/
