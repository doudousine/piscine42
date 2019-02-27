#include "ft_boolean.h"

int main()
{
	if(EVEN(9))
		write(1, EVEN_MSG, 20);
	else
		write(1, ODD_MSG, 20);
	return (0);
}
