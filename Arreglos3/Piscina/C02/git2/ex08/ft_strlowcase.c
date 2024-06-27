/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 15:46:51 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/15 15:46:54 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[i++] && str[i] != '\0')
		if (str[i] < 'A' && str[i] > 'Z')
			str[i] += 32;
	return (str);
}