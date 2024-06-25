/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:24:29 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/24 18:24:31 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		n;
	char	hex[16];

	hex[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
		'a', 'b', 'c', 'd', 'e', 'f'};
	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] == 127)
		{
			n = str[i];
			write(1, "\\", 1);
			write(1, &hex[n / 16], 1);
			write(1, &hex[n % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
