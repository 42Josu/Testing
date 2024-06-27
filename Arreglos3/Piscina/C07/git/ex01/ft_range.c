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
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;

	i = 0;
	if(!(a = (int *)malloc((max - min) * sizeof(int))))
		return (NULL);
	if(min >= max)
		return (NULL);
	while ((min + i) < max)
	{
		
		a[i] = (min + i);
		i++;
	}
	return (a);
}
/*
int	main()
{
	int	*i;
	int min;
	int max;
	int n;
	
	n = 0;
	min = 0;
	max = 5;
	if(!(i = (int *)malloc((max - min) * sizeof(int))))
		return (0);
	i = ft_range(min, max);
	while (n <= max - min - 1)
	{
		printf("%i", i[n]);
		n++;
	}
}
*/