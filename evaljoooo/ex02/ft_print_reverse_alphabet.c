/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eastaiza <eastaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:04:21 by eastaiza          #+#    #+#             */
/*   Updated: 2024/06/17 14:04:21 by eastaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	count;

	count = 'z';
	while (count >= 'a')
	{
		ft_putchar(count);
		count--;
	}
}

/*int main(){
	ft_print_reverse_alphabet();
	return 0;
}*/
