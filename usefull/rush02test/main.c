/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandt <dbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:42:30 by dbrandt           #+#    #+#             */
/*   Updated: 2022/10/30 14:05:52 by dbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac < 2 || ac > 3)
	{
		write(1, "ERROR\n", 7);
		return (0);
	}

	char	*dict;

	dict = malloc(350);
	ft_parse_dict(dict);
	printf("%s\n", ft_get_word(dict, av[1]));
	free(dict);
	return (0);
}

//ft_get_word(dict, av[1]);
//printf("%d\n", indxs);
//printf("%d\n", indxe);
//printf("%s", fn_make_word (str1, indxs, indxe));
//printf("%s\n", ft_strstr(dict, av[1]));
//printf("<<start>>>\n%s\n <<end>>>\n", dict);