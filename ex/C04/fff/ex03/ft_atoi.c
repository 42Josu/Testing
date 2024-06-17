/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:39:36 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/16 14:39:38 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	m;
	int	k;

	i = 0;
	n = 0;
	m = 0;
	k = 0;
	return (tururu(i, n, m, k));
}

int	tururu(int i, int n, int m, int k)
{
	while (str[i])
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n++;
		m++;
	}
	while (str[m++] <= i)
	{
		if (str[m] >= '0' && str[m] <= '9')
		{
			if (k != 0)
				k *= 10;
			k += str[m] - '0';
		}
		else
			break ;
	}
	if ((n % 2) != 0)
		k *= -1;
	return (k);
}