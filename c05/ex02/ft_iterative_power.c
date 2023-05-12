/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_power.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:15:32 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/26 11:15:33 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	n;

	if (power < 0)
		return (0);
	n = 1;
	while (power > 0)
	{
		n *= nb;
		--power;
	}
	return (n);
}

/*int main(void) 
{
  printf("%d\n", ft_iterative_power(3, 4));
  return (0);
}*/
