/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:17:33 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/26 11:17:36 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	factorial = 1;
	while (nb > 0)
		factorial *= nb--;
	return (factorial);
}
/*int main(void) 
{
  printf("%d\n", ft_iterative_factorial(5));
  return (0);
}*/
