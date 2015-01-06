/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 16:52:32 by asmets            #+#    #+#             */
/*   Updated: 2014/11/13 19:53:05 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int nbr;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nb;
	}
	else
		nbr = nb;
	if (nbr > 10)
		ft_putnbr_fd((nbr / 10), fd);
	ft_putchar_fd(((nbr % 10) + '0'), fd);
}
