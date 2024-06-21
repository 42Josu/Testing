#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	m;
	unsigned int	n;
	unsigned int	i;

	m = 0;
	n = 0;
	i = 0;
	while (m < size && dest[m] != '\0')
		m++;
	while (src[n] != '\0')
		n++;
	if (size > m)
		size = m;
	if (size <= m)
		return (size + n);
	while ((m + i) < (size - 1) && src[i] != '\0')
	{
		dest[m + i] = src[i];
		i++;
	}
	dest[m + i] = '\0';
	return (m + n);
}
/*
int main ()
{
	char *dest;
	char *src;
	unsigned int size;
	
	dest = "abc";
	src = "aga";
	size = 16;
	printf("%i", ft_strlcat(dest, src, size));
	return 1;
}*/