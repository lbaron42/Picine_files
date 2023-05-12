/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:19:37 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/26 11:19:39 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1 + ((nb < 0) * -2);
	while (i * i < nb && ((i < 0) == (nb < 0)))
		i += sign;
	if (i * i == nb)
		return (i);
	return (0);
}

int main(void) {
  printf("%d\n", ft_sqrt(9));
  return 0;
}
