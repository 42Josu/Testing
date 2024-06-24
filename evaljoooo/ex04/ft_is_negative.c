/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eastaiza <eastaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:05:09 by eastaiza          #+#    #+#             */
/*   Updated: 2024/06/17 14:05:09 by eastaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	negat;
	char	posit;

	negat = 'N';
	posit = 'P';
	if (n < 0)
	{
		write(1, &negat, 1);
	}
	else
	{
		write(1, &posit, 1);
	}
}

/*int	main(){
	int n = 1;
	ft_is_negative();
	return 0;
}*/