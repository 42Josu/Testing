/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 13:37:24 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/16 13:45:44 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	n;
	int	m;

	i = 0;
	n = 0;
	m = -1;
	while (dest[i])
		i++;
	while (src[n])
		n++;
	if (i > n)
		while (n > m++ && m <= size)
			dest[i + m] = src[m];
	else
		while (i > m++ && m <= size)
			dest[i + m] = src[m];
	return (i + m);
}
