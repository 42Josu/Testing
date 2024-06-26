/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 12:20:42 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/22 12:20:45 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	if (s1[i] || s2[i])
		return ((int)(s1[i] - s2[i]));
	return (0);
}

void anotar(char *a, char *b)
{
	int	i;
	
	i = 0;
	while (b[i] != '\0')
	{
		a[i] = b[i];
		i++;
	}
	a[i] = '\0';
}

void	obtenersig(char *anterior, char **full, int *h)
{
	int		c;
	int		cercanum;
	int		i;

	i = 0;
	cercanum = INT_MIN;
	while (full[i])
	{
		if (ft_strcmp(anterior, full[i]) > cercanum && h[i] != 1)
		{
			c = i;
			cercanum = ft_strcmp(anterior, full[i]);
		}
		i++;
	}
	h[c] = 1;
	anotar(anterior, full[c]);
}


int	strlng(char *n)
{
	int	i;

	i = 0;
	while (n[i] != '\0')
		i++;
	return (i);
}

int	main(int argsnum, char **strar)
{
	int		i;
	char	k[2560];
	int		h[3333];

	i = 1;
	k[0] = '\0';
	h[0] = 1;
	while (i < argsnum)
	{
		obtenersig(k, strar, h);
		i++;
		write(1, k, strlng(k));
		write(1, "\n", 1);
	}
	return (1);
}
