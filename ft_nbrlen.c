

#include "libft.h"

int ft_nbrlen(int nb)
{
	int i;

	i = 0;
	if(nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return(i);
}
