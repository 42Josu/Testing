#include <unistd.h>

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>

#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define TRUE 1
#define FALSE 0
#define SUCCESS 1
typedef	int		t_bool;

int EVEN(int i)
{
	if (i % 2 == 0)
		return 1;
	else
		return 0;
}

#endif