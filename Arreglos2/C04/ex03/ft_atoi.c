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

int	tururu(int i, int n, int m, int k, char *str)
{
	while (m <= i)
	{
		if (str[m] >= '0' && str[m] <= '9')
		{
			k += (str[m] - '0');
			if (str[m + 1] >= '0' && str[m + 1] <= '9')
				k *= 10;
		}
		else
		{
			break ;
		}
		m++;
	}
	if ((n % 2) != 0)
		k *= -1;
	return (k);
}

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
	while (str[i] != '\0')
	{
		i++;
	}
	while (str[m] == '-' || str[m] == '+' || str[m] == ' ')
	{
		if (str[m] == '-')
			n++;
		m++;
	}
	return (tururu(i, n, m, k, str));
}
