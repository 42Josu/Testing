/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magalean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:34:11 by magalean          #+#    #+#             */
/*   Updated: 2024/06/13 12:33:13 by magalean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/*int	main(void)
{
	int	a, b, div, mod;
	int	*dp, *mp;

	a = 4;
	b = 2;
	div = 0;
	mod = 0;

	dp = &div;
	mp = &mod;

	printf("a: %d, b: %d, div: %d, mod %d", a, b, div, mod);
	ft_div_mod(a, b, dp, mp);
	printf("a: %d, b: %d, div: %d, mod %d", a, b, div, mod);
	return (0);
}*/
