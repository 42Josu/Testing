/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:08:06 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/12 19:15:51 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	printnum(char q, char w, char e);

void	ft_print_comb(void)
{
	char	q;
	char	w;
	char	e;

	q = '0';
	while (q <= '7')
	{
		w = q + 1;
		while (w <= '8')
		{
			if (q != w)
			{
				e = w + 1;
				while (e <= '9')
				{
					printnum(q, w, e);
					e++;
				}
			}
			w++;
		}
		q++;
	}
}

void	printnum(char q, char w, char e)
{
	if (e != q && e != w)
	{
		write(1, &q, 1);
		write(1, &w, 1);
		write(1, &e, 1);
		if (q == '7' && w == '8' && e == '9')
		{
		}
		else
		{
			write(1, ", ", 2);
		}
	}
}
/*int main (){ ft_print_comb(); return 1;}*/
