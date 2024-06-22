/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarioui <mlarioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:34:59 by mlarioui          #+#    #+#             */
/*   Updated: 2024/06/19 22:07:17 by mlarioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	white_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = white_space(str);
	sign = 1;
	result = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
/*
int	main(void)
{
	char	*test1;
	char	*test2;
	char	*test3;
	char	*test4;
	char	*test5;

	test1 = " ---+--+1234ab567";
	test2 = "    42";
	test3 = "   +123";
	test4 = "   -456";
	test5 = "\t\n\v\f\r  -987";
	printf("Test 1: %s => %d\n", test1, ft_atoi(test1));
	printf("Test 2: %s => %d\n", test2, ft_atoi(test2));
	printf("Test 3: %s => %d\n", test3, ft_atoi(test3));
	printf("Test 4: %s => %d\n", test4, ft_atoi(test4));
	printf("Test 5: %s => %d\n", test5, ft_atoi(test5));
}*/
