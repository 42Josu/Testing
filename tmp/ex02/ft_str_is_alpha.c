/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 21:45:21 by yibrahim          #+#    #+#             */
/*   Updated: 2024/06/19 23:02:49 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)

{
	int	i;

	i = (0);
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main() {
	char	str1[] = "Hola galaxia";
	char	str2[] = "Hola galaxia150";
	char	str3[] = "";

	printf("Test 1: %d\n", ft_str_is_alpha(str1));
	printf("Test 2: %d\n", ft_str_is_alpha(str2));
	printf("Test 3: %d\n", ft_str_is_alpha(str3));
	
	return 0;

}*/
