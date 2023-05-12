/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:16:22 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/26 11:16:25 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb >= 1)
		return (nb * ft_recursive_factorial (nb - 1));
	else
		return (1);
}

int main(void) 
{
  printf("%d\n", ft_recursive_factorial(4));
  return (0);
}
