/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:28:20 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/12 15:43:20 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	wri(char c);

void	ft_putnbr(int nb)
{
	int	tmp;
	float	hey;

	tmp = 0;
	hey = (float)nb;
	if (hey < 0)
	{
		write(1, "-", 1);
		hey *= -1;
	}
	while (hey > 9)
	{
		hey /= 10;
		tmp++;
	}
	while (tmp >= 0)
	{
		wri((((int)hey) % 10) + '0');
		hey *= 10;
		tmp--;
	}
}

void	wri(char c)
{
	write(1, &c, 1);
}
