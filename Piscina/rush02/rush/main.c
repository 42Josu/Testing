#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <limits.h>
typedef struct
{
	int		numero;
	char	*string;
} libdata;
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	/*omitir espacios en blanco iniciales*/
	while (str[i] == ' ' || (str[i] >= 't' && str [i] <= 'r'))
		i++;
	/*manejar el signo*/
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	/*convertir caracteres numericos a entero*/
	while (str[i] >= '0' && str [i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
libdata linetolib (char *temp)
{
	int	i;
	int	n;
	char	*tmpchars;
	libdata	lbtmp;

	i = 0;
	n = 0;
	tmpchars = (char *) malloc(99999);
	while(temp[i] >= '0' && temp[i] <= '9')
	{
		tmpchars[i] = temp[i];
		i++;
	}
	lbtmp.numero = ft_atoi(tmpchars);
	printf("%i\n\n\n", lbtmp.numero);
	while (temp[i] == ':' || temp[i] == ' ')
		i++;
	while((temp[i] >= 'a' && temp[i] <= 'z') || (temp[i] >= 'A' && temp[i] <= 'Z'))
	{
		tmpchars[n] = temp[i];
		n++;
		i++;
	}
	lbtmp.string = tmpchars;
	return (lbtmp);
}
libdata *ordenarlib(libdata *lb, int medida)
{
	int i;
	int n;
	int k;
	long unsigned int w;
	libdata *tmp;

	tmp = (libdata *) malloc(99999);
	i = 0;
	n = 0;
	k = 0;
	w = ULONG_MAX;
	while (lb[i].numero && lb[i].numero == 0)
	{
		tmp[0] = lb[i];
		i++;
	}
	if(i < 0)
		n++;
	i = 0;
	while(medida > k)
	{
		w = ULONG_MAX;
		while(lb[i].numero)
		{
			if(lb[i].numero <= w && lb[i].numero != 0)
			{
				tmp[n] = lb[i];
				lb[i].numero = 0;
				n++;
				break;
			}
			i++;
		}
		i = 0;
		k++;
	}
	return (tmp);
}
libdata	*getlib(char *input)
{
	int	fp;
	int n;
	int	k;
	int m;
	char	*temp;
	char	*tmp;
	libdata	*lb;

	n = 0;
	k = 0;
	m = 0;
	temp = (char *) malloc(99999);
	tmp = (char *) malloc(99999);
	lb = (libdata *) malloc(99999);
	fp = open (input, O_RDONLY);
	if (fp == -1)
	{
		printf("La libreria no existe...");
		return (NULL);
	}
	read(fp, temp, 99999);
	while (temp[n])
	{
		tmp[k] = '\0';
		while (temp[n] && temp[n] != '\n' && temp[n] != '\0')
		{
			tmp[k] = temp[n];
			n++;
			k++;
		}
		if(k != 0)
		{
			lb[m] = linetolib(tmp);
			m++;
		}
		k++;
		while (k-- >= 0)
			tmp[k] = '\0';
		n++;
	}
	//lb = ordenarlib(lb, n);
	close(fp);
	return (lb);
}

void chachacha(libdata *lb, int input)//Algo con ritmo como un algo-ritmo
{
	int	i;
	int	k;
	
	k = 0;
	i = 0;
	while (lb[i].numero && lb[i].numero <= input)
		i++;
	k = input / lb[i].numero;
	printf("%i", lb[i].numero);
	if (k == 1)
	{
		printf("strlib: %s\n", lb[i].string);
	}
/*	int n;
	int i;
	int k;

	n = 0;
	k = 0;
	i = 2;
	while (input > 0)
	{
		while (lb[n].numero && lb[n].numero < input)
		{
			n++;
			while (lb[n].numero && (lb[n].numero * i) < input)
				i++;
			if(i > 2)
				chachacha(lb, i);
		}
		if(lb[n].numero)
		{
			printf("%s", (lb[n].string));
			if ((input - (lb[n].numero * i)) > 0)
				chachacha(lb, (input - (lb[n].numero * i)));
			k = input / (lb[n].numero);
		}
	}*/
}

void printlib(libdata *lb)
{
	int	i;
	
	i = 0;
	while(lb[i].numero)
	{
		printf("%s", lb[i].string);
		printf("\n");
		i++;
	}
}

int	main(int argn, char **str)
{
	int inputnum;
	libdata *lb;
	
	lb = (libdata *) malloc(99999);
	if (argn == 2)
	{
		lb = getlib("numbers.dict");
		inputnum = ft_atoi(str[1]);
		chachacha(lb, inputnum);
		//printlib(lb);
	}
	else if (argn == 3)
	{
		lb = getlib(str[1]);
		inputnum = ft_atoi(str[2]);
		chachacha(lb, inputnum);
		//printlib(lb);
	}
	return (0);
}
