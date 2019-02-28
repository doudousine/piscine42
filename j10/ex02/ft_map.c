#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*)(int))
{
	int	*tab;
	int	i;

	i = 0;
	tab = (int*)malloc(sizeof(*tab) * length);
	while (i < length)
	{
		tab[i] = f(tab[i]);
		i++;
	}
	return (tab);
}
