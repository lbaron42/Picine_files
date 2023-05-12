/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <lbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:14:08 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/27 20:05:13 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		n;
	char	*str;

	if (argc > 0)
	{
		n = 0;
		str = argv[0];
		while (*str++ != '\0')
			++n;
		write(1, argv[0], n);
		write(1, "\n", 1);
	}
	return (0);
}