/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:06:26 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/20 16:06:28 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lerele(int nb, int power, int val)
{
	if (power == 0)
		return (1);
	else if (power == 1)
		return (val);
	else if (power >= 1)
		return (lerele(nb, (power - 1), (val * nb)));
	return (0);
}

int	ft_recursive_power(int nb, int power)
{
	return (lerele(nb, power, nb));
}
