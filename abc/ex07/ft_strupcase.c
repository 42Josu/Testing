/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutefe <aboutefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:10:57 by aboutefe          #+#    #+#             */
/*   Updated: 2024/06/21 14:40:18 by aboutefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 'a' && str[pos] <= 'z')
			str[pos] = str[pos] - 'a' + 'A';
		pos++;
	}
	return (str);
}

/*
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char str1[] = "hell34o wor2ld";
	char str2[] = "HE6LLO WOR7LD";
	char str3[] = "MiX9eD cA8sE";

	printf("Original: %s\n", str1);
	ft_strupcase(str1);
	printf("Uppercase: %s\n\n", str1);

	printf("Original: %s\n", str2);
	ft_strupcase(str2);
	printf("Uppercase: %s\n\n", str2);

	printf("Original: %s\n", str3);
	ft_strupcase(str3);
	printf("Uppercase: %s\n\n", str3);

	return (0);
}
*/