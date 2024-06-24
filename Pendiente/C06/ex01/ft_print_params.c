/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:03:54 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/21 15:04:04 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argsnum, char **strar)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (n < argsnum)
	{
		while (strar[n][i])
		{
			write(1, &strar[n][i], 1);
			i++;
		}
		i = 0;
		write(1, "\n", 1);
		n++;
	}
	return (1);
}
