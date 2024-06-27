/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:52:25 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/12 19:18:21 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printnum(char w, char e);

void	ft_print_comb2(void)
{
	int	w;
	int	e;

	w =0 + '0';
	while (w <= '9')
	{
		e = 1 + w;
		while (e <= '9')
		{
			printnum(w, e);
			e++;
		}
		w++;
	}
}

void	printnum(char w, char e)
{
	write(1, &w, 1);
	write(1, &e, 1);
	if (w == '9' && e == '9')
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}
