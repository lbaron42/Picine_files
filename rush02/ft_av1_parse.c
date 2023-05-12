/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_av1_parse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandt <dbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:48:56 by dbrandt           #+#    #+#             */
/*   Updated: 2022/10/30 17:55:29 by dbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// char	*fn_parse_av1(char *str)
// {
// 	int		len;
// 	int		i;
// 	char	*x;

// 	i = 0;
// 	x = malloc(10 * sizeof(char));
// 	len = ft_strlen(str);
// 	if (len == 2 && str[0] > 1 && str[1] > 0)
// 		return (x);
// }
