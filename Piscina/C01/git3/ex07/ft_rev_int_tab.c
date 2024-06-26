#include <stdio.h>

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
/*
int main()
{
	int	i;
	int	tab[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
	int size = sizeof(tab) / sizeof(tab[0]);
	
	i = 0;
	ft_rev_int_tab(tab, size);
	while(i < size)
	{
		printf("%i", tab[i]);
		i++;
	}
	return (1);
}*/