/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-cast <ide-cast@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:04:54 by ide-cast          #+#    #+#             */
/*   Updated: 2024/06/14 13:04:56 by ide-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*sbstr;
	char	*pattern;

	if (*to_find == '\0')
	{
		return ((char *)str);
	}
	while (*str != '\0')
	{
		sbstr = str;
		pattern = to_find;
		while (*sbstr != '\0' && *pattern != '\0' && *sbstr == *pattern)
		{
			sbstr++;
			pattern++;
		}
		if (*pattern == '\0')
		{
			return ((char *)str);
		}
		str++;
	}
	return (NULL);
}
/*
int 	main(void) 
{
    char str[] = "Hello, World!";
    char to_find[] = "";
    char *result = ft_strstr(str, to_find);

    if (result != NULL) {
        printf("La subcadena se encontró: %s\n", result);
    } else {
        printf("La subcadena no se encontró.\n");
    }

    return 0;
}*/
