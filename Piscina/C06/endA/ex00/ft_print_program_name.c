/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:02:42 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/21 15:02:44 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argsnum, char **strar)
{
	int	i;

	i = 0;
	if (argsnum <= 0)
		return (0);
	while (strar[0][i] != '\0')
	{
		write(1, &strar[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (1);
}
