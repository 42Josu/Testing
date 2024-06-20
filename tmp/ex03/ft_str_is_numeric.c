/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 23:44:10 by yibrahim          #+#    #+#             */
/*   Updated: 2024/06/20 01:48:28 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = (0);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "47856";
	char	str2[] = "785c77";
	char	str3[] = "";
	
	printf("Test 1: %d\n", ft_str_is_numeric(str1));
	printf("Test 2: %d\n", ft_str_is_numeric(str2));
	printf("Test 3: %d\n", ft_str_is_numeric(str3));
	return (0);
}*/
