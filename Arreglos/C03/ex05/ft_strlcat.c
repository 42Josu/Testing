#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	m;
	unsigned int	n;

	m = 0;
	n = 0;
	while (m < size && dest[m] != '\0')
		m++;
	while (src[n] != '\0')
	{
		if(n <= (size - m - 1))
		{
			dest[m+n] = src[n];
			dest[m+n+1] = '\0';
		}
		n++;
	}
	dest[size] = '\0';
	return(m + n);
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