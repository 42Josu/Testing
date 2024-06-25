/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutefe <aboutefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:10:08 by aboutefe          #+#    #+#             */
/*   Updated: 2024/06/21 13:23:12 by aboutefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	pos;

	pos = 0;
	while ((pos < n) && (src[pos] != '\0'))
	{
		dest[pos] = src[pos];
		pos++;
	}
	return (dest);
}
/*
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main() {
    char src[] = "Hello, World!";
    char dest[20];

    printf("Source string: %s\n", src);

    ft_strncpy(dest, src, 7); // copy only 7 characters
    dest[7] = '\0'; // null-terminate the destination string
    printf("Destination string (copied 7 characters): %s\n", dest);

    ft_strncpy(dest, src, 20); // copy the entire string
    printf("Destination string (copied entire string): %s\n", dest);

    return 0;
}
*/
