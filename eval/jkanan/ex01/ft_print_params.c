/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:14:33 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/26 19:14:35 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	unsigned int	n;
	int				i;
	char			*str;

	i = 0;
	while (++i < argc)
	{
		n = 0;
		str = argv[i];
		while (*str++ != '\0')
			++n;
		write(1, argv[i], n);
		write(1, "\n", 1);
	}
}
