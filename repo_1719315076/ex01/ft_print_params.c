/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-cast <ide-cast@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 20:29:42 by ide-cast          #+#    #+#             */
/*   Updated: 2024/06/24 20:29:46 by ide-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	a;
	int	b;

	a = 1;
	while (a < ac)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			write (1, &av[a][b], 1);
			b++;
		}
		write(1, "\n", 1);
		a++;
	}
	return (0);
}
