/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <jenbeita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 17:02:31 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/08 17:08:12 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printspace(int i, int n, int x, int y);

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	n;

	i = 1;
	n = 1;
	while (x >= i)
	{
		while (y >= n)
		{
			printspace(i, n, x, y);
			n++;
		}
		if (y == n - 1)
		{
			ft_putchar('\n');
		}
		n = 1;
		i++;
	}
}

void	printspace(int i, int n, int x, int y)
{
	if ((i == x && n == 1) || (i == x && n == y)
		|| (i == 1 && n == y) || (i == 1 && n == 1))
	{
		ft_putchar('o');
	}
	else if (i == x || i == 1)
	{
		ft_putchar('-');
	}
	else if (n == y || n == 1)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}
