/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 08:26:54 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/13 08:26:59 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	num[9];
	char	max[9];
	int		c;

	c = -1;
	while (++c < n)
	{
		max[c] = '9' - (n - 1) + c;
		num[c] = '0' + c;
	}
	write(1, num, --c + 1);
	while (c >= 0)
	{
		if (num[c] == max[c])
			--c;
		else if (++c != n)
			num[c] = num[c - 1];
		else
			--c;
		if (++num[c] == max[c] || c == n - 1)
		{
			write(1, ", ", 2);
			write(1, num, n);
		}
	}
}
