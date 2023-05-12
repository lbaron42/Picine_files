/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hdhd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwild <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:49:46 by hwild             #+#    #+#             */
/*   Updated: 2022/10/25 12:49:46 by hwild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < -2147483647)
	{
		write (1, "-2147483648", 11);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 0)
	{
		ft_putchar ('-');
		nb = -nb;
		ft_putnbr (nb);
	}
	else
		ft_putchar (nb + 48);
}

int	main(void)
{
	ft_putnbr(42);
	return (0);
}
