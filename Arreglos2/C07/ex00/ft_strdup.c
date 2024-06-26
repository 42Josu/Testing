/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 12:14:08 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/22 12:14:10 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	char	*tururu;
	int		i;

	i = 0;
	while (src[i])
		i++;
	tururu = (char *)malloc(i + 1);
	tururu[i + 1] = '\0';
	while (i >= 0)
	{
		tururu[i] = src[i];
		i--;
	}
	return (tururu);
}
