/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:21:01 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/24 18:21:04 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	k[9999];

	n = 0;
	while (n < size)
	{
		i = 0;
		k[n] = INT_MAX;
		while (i < size)
		{
			if (k[n] >= tab[i])
			{
				k[n] = tab[i];
				k[9998] = i;
			}
			i++;
		}
		tab[k[9998]] = INT_MAX;
		n++;
	}
	while (n-- > 0)
		tab[n] = k[n];
}
/*


void ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	
	i = 0;
	while(i < size)
	{
		n = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = n;
		i++;
		size--;
	}
}

int main()
{
	int	i;
	int	tab[] = { 3, 3, 1, 2, 3, 4, 5, 6, 7 };
	int size = sizeof(tab) / sizeof(tab[0]);
	
	i = 0;
	ft_sort_int_tab(tab, size);
	while(i < size)
	{
		printf("%i", tab[i]);
		i++;
	}
	return (1);
}*/
