
#include "libft.h"

t_list *ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;
	char *tmp; 

	new = (t_list*)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		tmp = ft_memcpy(tmp, content, content_size);
		new->content_size = content_size;
		new->content = tmp;
	}
		new->next = NULL;
	return (new);
}
