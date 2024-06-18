/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:31:23 by marksanc          #+#    #+#             */
/*   Updated: 2024/06/14 14:24:45 by marksanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	int	abc;

	abc = 'z';
	while (abc >= 'a')
	{
		write(1, &abc, 1);
		abc--;
	}
}

//int	main(void)
//{
//	ft_print_reverse_alphabet();
//	return (0);
//}
