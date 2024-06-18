/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:56:55 by marksanc          #+#    #+#             */
/*   Updated: 2024/06/11 14:56:44 by marksanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)

{
	int	abc;

	abc = 'a';
	while (abc <= 'z')
	{
		write(1, &abc, 1);
		abc++;
	}
}

//int	main(void)
//{
//	ft_print_alphabet();
//	return (0);
//}
