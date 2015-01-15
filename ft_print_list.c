
#include "libft.h"

void ft_print_list(t_list *list)
{
	while(list)
	{
		ft_putendl(list->content);
		list = list->next;
	}
}
