/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarioui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:48:42 by mlarioui          #+#    #+#             */
/*   Updated: 2024/06/19 12:13:50 by mlarioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/*int	main(void)
{
	char	*mystring;

	mystring = "let's keep hustling";
	printf("len of this string is %d\n", ft_strlen(mystring));
	return (0);
}*/
