/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eastaiza <eastaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 02:33:26 by eastaiza          #+#    #+#             */
/*   Updated: 2024/06/19 17:11:20 by eastaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	template(int a, int b, int is_last)
{
	char	comb[8];

	comb[0] = '0' + a / 10;
	comb[1] = '0' + a % 10;
	comb[2] = ' ';
	comb[3] = '0' + b / 10;
	comb[4] = '0' + b % 10;
	if (is_last)
	{
		comb[5] = '\n';
		comb[6] = '\0';
		write(1, comb, 7);
	}
	else
	{
		comb[5] = ',';
		comb[6] = ' ';
		comb[7] = '\0';
		write(1, comb, 8);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	is_last;
	
	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			is_last = (a == 98 && b == 99);
			template(a, b, is_last);
			b++;
		}
		a++;
	}
}

int	main(){
	ft_print_comb2();
	return 0;
}
