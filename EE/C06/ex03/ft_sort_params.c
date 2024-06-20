#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	if (s1[i] || s2[i])
		return ((int)(s1[i] - s2[i]));
	return (0);
}
char *obtenersig (char *anterior, char **full, int *h)
{
	char	*cercania;
	int	cercanum;
	int	i;
	
	i = 0;
	cercanum = 2147483647;
	while (full[i])
	{
		if(ft_strcmp(anterior, full[i]) < cercanum && h[i] != 1)
		{
			cercania = full[i];
			cercanum = ft_strcmp(anterior, full[i]);
			h[i] = 1;
		}
		i++;
	}
	return (cercania);
}
int strlng(char *n)
{
	int	i;
	
	i = 0;
	while (n[i] != '\0')
		i++;
	return (i);
}
int	main(int argsnum, char **strar)
{
	int	i;
	char k[256];
	int h[argsnum];
	
	i = 1;
	*k = '\0';
	while (i < argsnum)
	{
		*k = obtenersig(k, strar, h);
		i++;
		write(1, k, strlng(k));
	}
	return (1);
}