/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magalean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 23:02:41 by magalean          #+#    #+#             */
/*   Updated: 2024/06/18 23:30:43 by magalean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_short_int_tab(int *tab, int size)
{
	int	updated;
	int	count;
	int	temp;

	updated = 1;
	while (updated)
	{
		count = 0;
		updated = 0;
		while (count < size - 1)
		{
			if (tab[count] > tab[count + 1])
			{
				updated = 1;
				temp = tab[count];
				tab[count] = tab[count + 1];
				tab[count + 1] = temp;
			}
			count++;
		}
	}
}
/*int main() {
    int tab[] = {5, 2, 8, 3, 1, 6, 4};
    int size = sizeof(tab) / sizeof(tab[0]);

    printf("Before sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    ft_short_int_tab(tab, size);

    printf("After sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}*/
