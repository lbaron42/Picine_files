/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 08:15:57 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/16 19:10:25 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		counter1;
	int		counter2;
	char	c;

	write(1, "00 01", 5);
	counter1 = 0;
	counter2 = 2;
	while (counter1 < 100 && counter2 < 100)
	{
		write(1, ", ", 2);
		c = counter1 / 10 + '0';
		write(1, &c, 1);
		c = counter1 % 10 + '0';
		write(1, &c, 1);
		write(1, " ", 1);
		c = counter2 / 10 + '0';
		write(1, &c, 1);
		c = counter2 % 10 + '0';
		write(1, &c, 1);
		++counter2;
		if (counter2 == 100)
		{
			counter2 = ++counter1 + 1;
		}
	}
}
int main(void)
{
	ft_print_comb2();
}
