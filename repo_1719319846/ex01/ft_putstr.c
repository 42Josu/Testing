/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 09:14:46 by olalsanc          #+#    #+#             */
/*   Updated: 2024/06/24 09:14:50 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		write(1, str[i], 1);
		i++;
	}
}

para la opción que meos dejado es necesrio que en write no pongamos el &str.
si lo hacemos estamos pasando la dirección de str (&str) en lugar de 
la dirección del carácter al que str apunta (str).
Esto asegura que se está escribiendo el carácter al que str apunta, 
no la dirección del puntero str.
*/
#include <unistd.h>

void	ft_putstr(char *str)
{
	if (!*str)
		write(1, "NULL", 5);
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
/*
int	main(void)
{
	char	*string;

	string = "This is a sentence";
	ft_putstr(string);
	return (0);
}
*/
