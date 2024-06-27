/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesaiz-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:25:11 by pesaiz-m          #+#    #+#             */
/*   Updated: 2024/06/24 19:31:03 by pesaiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i > 1);
}

void	ft_putnbr_base_recursive(int nbr, char *base, int base_size)
{
	if (nbr >= base_size || nbr <= -base_size)
	{
		ft_putnbr_base_recursive(nbr / base_size, base, base_size);
		ft_putnbr_base_recursive(nbr % base_size, base, base_size);
	}
	else
	{
		if (nbr < 0)
			ft_putchar(base[-nbr]);
		else
			ft_putchar(base[nbr]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;

	if (!is_valid_base(base))
		return ;
	base_size = 0;
	while (base[base_size])
		base_size++;
	if (nbr < 0)
		ft_putchar('-');
	ft_putnbr_base_recursive(nbr, base, base_size);
}
