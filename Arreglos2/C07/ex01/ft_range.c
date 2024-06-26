/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 12:15:28 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/22 12:15:30 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;

	i = 0;
	if(max <= min)
		return (NULL);
	else
		a = (int *)malloc(max - min);
	while ((min + i) < max)
	{
		a[i] = (min + i);
		i++;
	}
	return (a);
}
