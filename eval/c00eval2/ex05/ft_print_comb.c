/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:22:54 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/16 19:08:50 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	num[3];
	char	separator[2];

	num[0] = '0';
	num[1] = '1';
	num[2] = '2';
	separator[0] = ',';
	separator[1] = ' ';
	write(1, num, 3);
	num[2] = '3';
	while (num[0] <= '7')
	{
		while (num[1] <= '8')
		{
			while (num[2] <= '9')
			{
				write(1, separator, 2);
				write(1, num, 3);
				++num[2];
			}
			num[2] = ++num[1] + 1;
		}
		num[1] = ++num[0] + 1;
		num[2] = num[1] + 1;
	}
}

int main(void)
{
	ft_print_comb();
}
