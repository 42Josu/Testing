/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 13:36:57 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/16 13:45:13 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;
	int	m;

	i = 0;
	n = 0;
	m = -1;
	while (str[i])
		i++;
	while (to_find[n])
		n++;
	if (i > n)
		while (n > m++)
			if (str[m] == to_find[m])
				return (&to_find[m]);
	else
		while (i > m++)
			if (str[m] == to_find[m])
				return (&to_find[m]);
	return (str);
}
