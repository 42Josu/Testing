/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutefe <aboutefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:11:08 by aboutefe          #+#    #+#             */
/*   Updated: 2024/06/21 13:23:12 by aboutefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_lowercase(char str)
{
	return (str >= 'a' && str <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (!is_lowercase(str[pos]))
			return (0);
		pos++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	char *test_strings[] =
	{
		"Hello",
		"Hello123",
		"abcdefg",
		" ABCdef",
		"123abc",
		"abcdef",
		"",
		"a",
		"76",
		"A",
		" ABC "
	};

int num_tests = sizeof(test_strings) / sizeof(test_strings[0]);
for (int i = 0; i < num_tests; i++)
{
	char *str = test_strings[i];
	int result = ft_str_is_printable(str);

	printf("Testing string: \"%s\"\n", str);
	if (result == 1)
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}
	printf("\n");
}
return 0;
}
*/