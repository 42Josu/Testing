/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarioui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:58:26 by mlarioui          #+#    #+#             */
/*   Updated: 2024/06/20 21:13:32 by mlarioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	i;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		return (ft_putnbr(nb));
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	i = (nb % 10) + '0';
	write(1, &i, 1);
}
/*
int	main(void)
{
	ft_putnbr(-160);
}*/
