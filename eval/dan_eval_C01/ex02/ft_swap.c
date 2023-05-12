/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:52:15 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/18 11:52:45 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	bkt;

	bkt = *a;
	*a = *b;
	*b = bkt;
}

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}


int main(void)
{
    int c;
    int d;
    int *a;
    int *b;
    c = 23;
    d = 42;
    a = &c;
    b = &d;
    ft_putnbr(c);
    ft_putchar(',');
    ft_putchar(' ');
    ft_putnbr(d);
    ft_putchar('\n');
    ft_swap(a, b);
    ft_putnbr(c);
    ft_putchar(',');
    ft_putchar(' ');
    ft_putnbr(d);
    ft_putchar('\n');
}*/
