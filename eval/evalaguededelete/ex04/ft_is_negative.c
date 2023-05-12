/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:03:44 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/16 18:48:40 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)

{
	if (n < 0)
		write(1, &"N", 1);
	else
		write(1, &"P", 1);
}

int main(void)
{
	ft_is_negative(598);
}
