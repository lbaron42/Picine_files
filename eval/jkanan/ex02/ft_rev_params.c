/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:14:53 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/26 19:14:54 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	unsigned int	n;
	char			*str;

	while (--argc > 0)
	{
		n = 0;
		str = argv[argc];
		while (*str++ != '\0')
			++n;
		write(1, argv[argc], n);
		write(1, "\n", 1);
	}
}
