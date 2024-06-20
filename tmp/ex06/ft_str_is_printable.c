/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 02:51:16 by yibrahim          #+#    #+#             */
/*   Updated: 2024/06/20 14:38:58 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = (0);
	if (str [i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int     main(void)
 {
         char str1[] = "Hola galaxia";
         char str2[] = "hola\ngalaxia";
         char str3[] = ""; 
         printf("Test 1: %d\n", ft_str_is_printable(str1));
         printf("Test 2: %d\n", ft_str_is_printable(str2));
         printf("Test 3: %d\n", ft_str_is_printable(str3));
  
         return (0);
 }*/
