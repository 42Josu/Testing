/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eastaiza <eastaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:04:46 by eastaiza          #+#    #+#             */
/*   Updated: 2024/06/17 14:04:46 by eastaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	count;

	count = '0';
	while (count <= '9')
	{
		ft_putchar(count);
		count++;
	}
}

/*int main(){
	ft_print_numbers();
	return 0;
}*/
