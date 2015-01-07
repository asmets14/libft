

#include "libft.h"

int ft_lstlen(t_list *list)
{
	size_t len;

	if (list == NULL)
		return (0);
	len = 0;
	while (list)
	{
		len++;
		list = list->next;
	}
	return (list);
}
