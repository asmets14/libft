/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 12:49:15 by asmets            #+#    #+#             */
/*   Updated: 2015/02/04 12:55:01 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copie jusqu'au caractere c non inclu.

#include "libft.h"

char * ft_strcdup(const char *s1, char c)
{
	int i;

	i = 0;
	while (s1[i] && (s1[i] != c))
		i++;
	return (ft_strndup(s1, i));
}
