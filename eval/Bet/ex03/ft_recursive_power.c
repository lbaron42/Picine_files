/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:18:34 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/26 11:18:36 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power != 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else
		return (1);
}

int main(void) 
{
  printf("%d\n", ft_recursive_power(3, 4));
  return (0);
}
