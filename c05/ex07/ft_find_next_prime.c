/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:20:35 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/26 11:20:37 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MAX_SQRT 46341

static int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i * i <= nb && i <= MAX_SQRT)
	{
		if (nb % i == 0)
			return (0);
		if (i == 2)
			++i;
		else
			i += 2;
	}
	return (nb > 1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		if (nb % 2 && nb > 2)
			nb += 2;
		else
			++nb;
	}
	return (nb);
}

/*int main()
{
  printf("%d", ft_find_next_prime(14));
}*/
