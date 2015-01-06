/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 16:52:32 by asmets            #+#    #+#             */
/*   Updated: 2015/01/06 15:54:11 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	unsigned int nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nbr = -nb;
	}
	else
		nbr = nb;
	if (nbr > 10)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}
