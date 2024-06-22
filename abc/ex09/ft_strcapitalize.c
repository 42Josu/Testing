/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutefe <aboutefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:10:51 by aboutefe          #+#    #+#             */
/*   Updated: 2024/06/21 14:38:22 by aboutefe         ###   ########.fr       */
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

int	good_characters(char character)
{
	int	is_lowercase;
	int	is_uppercase;
	int	is_num;

	is_lowercase = (character >= 'a' && character <= 'z');
	is_uppercase = (character >= 'A' && character <= 'Z');
	is_num = (character >= '0' && character <= '9');
	return ((is_lowercase || is_uppercase || is_num));
}

char	*ft_strcapitalize(char *str)
{
	int	pos;

	pos = 0;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 'a' + 'A';
	while (str[pos] != '\0')
	{
		if (!(good_characters(str[pos])))
		{
			if (str[pos + 1] >= 'a' && str[pos] <= 'z')
			{
				str[pos + 1] = str[pos + 1] - 'a' + 'A';
			}
		}
		pos++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "salut, comment tu vas ?
	42mots quarante-deux; cinquante+et+un";

	printf("Original: %s\n", str1);
	ft_strcapitalize(str1);
	printf("Capitalized: %s\n\n", str1);
	return (0);
}
*/
