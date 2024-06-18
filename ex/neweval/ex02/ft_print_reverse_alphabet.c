/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rares-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:08:20 by rares-pe          #+#    #+#             */
/*   Updated: 2024/06/18 11:44:53 by rares-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	word;

	word = 'z';
	while (word >= 'a')
	{
		write (1, &word, 1);
		word--;
	}
}

//int	main(void)
//{
//	ft_print_reverse_alphabet();
//	return (0);
//}
