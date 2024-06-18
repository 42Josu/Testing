/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rares-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:38:55 by rares-pe          #+#    #+#             */
/*   Updated: 2024/06/18 11:45:20 by rares-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	word;

	word = 'a';
	while
		(word <= 'z')
	{
		write(1, &word, 1);
		word++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
