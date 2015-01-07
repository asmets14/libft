
#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *beginning_list;
	t_list *brand_list;
	
	if(lst == NULL && f == NULL)
		return (NULL);
	tmp = f(lst);
	brand_list = ft_lstnew(tmp->content, tmp->content_size);
	if (brand_list == NULL)
		return (NULL);
	beginning_list = brand_list;
	while (lst->next)
	{
		tmp = f(lst->next);
		brand_list->next = ft_lstnew(tmp->content, tmp->content_size);
		if(brand_list->next == NULL)
			return (NULL);
		lst = lst->next;
		brand_list = brand_list->next;
	}
	return (beginning_list);
}
