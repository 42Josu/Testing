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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*a;
	int	i;

	i = 0;
	while ((min + i) < max)
	{
		a = (char *)malloc(i + 1);
		a[i] = (min + i);
		i++;
	}
	return (a);
}
