/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:26:02 by ttaneski          #+#    #+#             */
/*   Updated: 2022/10/16 13:26:23 by ttaneski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n);

void	print_caracter(int x, int y, int l, int w)
{
	if ((l == 0 && w == 0) || ((w == 0 && l == y - 1)))
		ft_putchar('A');
	else if ((w == x - 1 && l == 0) || (l == y - 1 && w == x - 1))
		ft_putchar('C');
	else if ((w == x - 1 || w == 0) || (l == 0 || l == y - 1))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	l;
	int	w;

	if ((x <= 0 || y <= 1) || (x > 123 || y > 42))
	{
		write(1, "Out of bounderies!\n", 18);
	}
	else
	{
		l = 0;
		while (l < y)
		{
			w = 0;
			while (w < x)
			{
				print_caracter(x, y, l, w);
				++w;
			}
			ft_putchar('\n');
			++l;
		}
	}
}
