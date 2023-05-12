/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandt <dbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:42:30 by dbrandt           #+#    #+#             */
/*   Updated: 2022/10/30 17:11:37 by dbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		++n;
	write(1, str, n);
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	char	*dict;
	char	*str_p;

	if (ac < 2 || ac > 3)
	{
		write(1, "ERROR\n", 7);
		return (0);
	}
	dict = malloc(350);
	ft_parse_dict(dict);
	str_p = ft_get_word(dict, av[1]);
	ft_putstr(str_p);
	free(dict);
	return (0);
}
