/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutefe <aboutefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:10:08 by aboutefe          #+#    #+#             */
/*   Updated: 2024/06/26 12:19:13 by aboutefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	pos;
	unsigned int	size_dest;

	pos = 0;
	size_dest = 0;
	while ((pos < n) && (src[pos] != '\0'))
	{
		dest[pos] = src[pos];
		pos++;
		size_dest++;
	}
	while (size_dest <= n)
	{
		dest[size_dest++] = '\0';
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char src[] = "Hello, World!";
	char dest[] = "Vamos a poner una cadena más larga para ver qué pasa";
	int tam = strlen(dest);
	printf("%s\n", src);
	printf("%s\n", dest);
	ft_strncpy(dest, src, 35);
	
	int cont = 0;
	while (cont < tam)
	{
		write (1,&dest[cont++], 1);
	}
	return 0;
}
*/
