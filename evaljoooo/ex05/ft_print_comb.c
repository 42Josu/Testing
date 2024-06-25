/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eastaiza <eastaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:08:37 by eastaiza          #+#    #+#             */
/*   Updated: 2024/06/19 17:11:15 by eastaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	template(int a, int b, int c, int is_last)
{
	char	number[6];

	number[0] = '0' + a;
	number[1] = '0' + b;
	number[2] = '0' + c;
	if (is_last)
	{
		number[3] = '\n';
		write(1, number, 4);
	}
	else
	{
		number[3] = ',';
		number[4] = ' ';
		write(1, number, 5);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;
	int	is_last;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				is_last = (a == 7 && b == 8 && c == 9);
				template(a, b, c, is_last);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*int	main(){
	ft_print_comb();
	return 0;
}*/