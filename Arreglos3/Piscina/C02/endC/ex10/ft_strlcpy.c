/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:23:32 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/24 18:23:35 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	n;

	n = 0;
	while (n < (size - 1) && src[n])
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	while (src[n])
		n++;
	return (n);
}
