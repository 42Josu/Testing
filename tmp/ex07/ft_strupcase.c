/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:02:24 by yibrahim          #+#    #+#             */
/*   Updated: 2024/06/20 15:43:49 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)

{
	int	i;

	i = (0);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str1[] = "hola galaxia";
	char	str2[] = "HOLA GALAXIA";
	char	str3[] = "";

	printf("Test 1: %s\n", ft_strupcase(str1));
	printf("Test 2: %s\n", ft_strupcase(str2));
	printf("Test 3: %s\n", ft_strupcase(str3));

	return (0);
}*/
