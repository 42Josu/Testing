/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 12:16:19 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/22 12:16:21 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*a;
	int	i;

	i = 0;
	if(!(a = (int *)malloc((max - min) * sizeof(int))))
		return (-1);
	if(min >= max)
		return (-1);
	while ((min + i) < max)
	{
		
		a[i] = (min + i);
		i++;
	}
	*range = a;
	return (i);
}
