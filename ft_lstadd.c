/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 18:47:22 by asmets            #+#    #+#             */
/*   Updated: 2014/11/16 19:06:59 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd(t_list **add, t_list *new)
{
	if (new)
	{
		if (!(*add))
			*add = new;
		new->next = *add;
		*add = new;
	}
}
