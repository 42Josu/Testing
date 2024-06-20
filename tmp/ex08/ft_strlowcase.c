/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:45:46 by yibrahim          #+#    #+#             */
/*   Updated: 2024/06/20 16:04:56 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)

{
	int	i;

	i = (0);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] +32;
		}
		i++;
	}
	return (str);
}

/*int   main(void)
{
	 char    str1[] = "HOLA GALAXIA";
	 char    str2[] = "HOLA GALAXIA";
	 char    str3[] = "";

	printf("Test 1: %s\n", ft_strlowcase(str1));
	printf("Test 2: %s\n", ft_strlowcase(str2));
	printf("Test 3: %s\n", ft_strlowcase(str3));

	return (0);
}*/
