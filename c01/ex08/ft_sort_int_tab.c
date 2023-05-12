/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 20:43:08 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/18 20:43:11 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	max_pos;
	int	temp;
	int	i;

	max_pos = size;
	while (max_pos > 0)
	{
		i = 0;
		while (++i < max_pos)
		{
			if (tab[i - 1] > tab[i])
			{
				temp = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = temp;
			}
		}
		--max_pos;
	}
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
int	main()
{
	int arr[4] = {100, 50, 25, 75};
	int *tab;
	tab = arr;
	ft_sort_int_tab(tab, 4);
  int c = 0;
  while(c <= 3)
    {  
    ft_putnbr(arr[c]);
    if(c < 3)  
    write(1, ", ", 2);
    c++;  
    }
}*/
