/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-cast <ide-cast@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:09:53 by ide-cast          #+#    #+#             */
/*   Updated: 2024/06/24 19:09:55 by ide-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char **av)
{
	int	a;

	(void)ac;
	a = 0;
	while (av[0][a] != '\0')
	{
		write(1, &av[0][a], 1);
		a++;
	}
	return (0);
}