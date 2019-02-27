#include <stdio.h>
#include "ft_point.h"

int main(int ac, char **av)
{
	int a = 42, b =21;
t_point c;

	c.x = a;
	c.y = b;
	printf("%i %i", c.x, c.y);
	return (0);
}
