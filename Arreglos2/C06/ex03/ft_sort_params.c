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
	while (b[i])
	{
		a[i] = b[i];
		i++;
	}
	a[i] = '\0';
}

void	obtenersig(char *anterior, char **full, int *h)
{
	char	*cercania;
	int		cercanum;
	int		i;

	i = 0;
	cercanum = 2147483647;
	while (full[i])
	{
		if (ft_strcmp(anterior, full[i]) < cercanum && h[i] != 1)
		{
			cercania = &full[i][0];
			cercanum = ft_strcmp(anterior, full[i]);
			h[i] = 1;
		}
		i++;
	}
	anotar(anterior, cercania);
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
	char	k[256];
	int		h[3333];

	i = 1;
	k[0] = '\0';
	while (i < argsnum)
	{
		obtenersig(k, strar, h);
		i++;
		write(1, k, strlng(k));
	}
	return (1);
}
