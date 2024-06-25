/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutefe <aboutefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:10:54 by aboutefe          #+#    #+#             */
/*   Updated: 2024/06/21 13:49:37 by aboutefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 'A' && str[pos] <= 'Z')
			str[pos] = str[pos] - 'A' + 'a';
		pos++;
	}
	return (str);
}

/*
#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char str1[] = "hello world";
	char str2[] = "HELLO WORLD";
	char str3[] = "MiXeD cAsE";

	printf("Original: %s\n", str1);
	ft_strlowcase(str1);
	printf("Lowercase: %s\n\n", str1);

	printf("Original: %s\n", str2);
	ft_strlowcase(str2);
	printf("Lowercase: %s\n\n", str2);

	printf("Original: %s\n", str3);
	ft_strlowcase(str3);
	printf("Lowercase: %s\n\n", str3);

	return (0);
}
*/