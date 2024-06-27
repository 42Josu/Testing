/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoherre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:30:58 by igoherre          #+#    #+#             */
/*   Updated: 2024/06/20 11:30:59 by igoherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_sizeof(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_size;

	i = 0;
	dest_size = ft_sizeof(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[20] = "Mundo";
	char	dest[20] = "Hola ";
	
	printf("%s", ft_strncat(dest, src, 2));
	return (0);
}
*/
