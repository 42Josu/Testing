/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:12:52 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/24 18:12:55 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checkminus(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2", 1);
			nb += 2000000000;
		}
		nb *= -1;
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	char	k[256];
	int		i;

	i = 0;
	nb = checkminus(nb);
	while (nb > 9)
	{
		k[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	k[i] = nb + '0';
	while (i >= 0)
	{
		write(1, &k[i], 1);
		i--;
	}
}
/*
int main()
{
	ft_putnbr(-2147483648);
	return (1);
}*/
