/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandt <dbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:20:49 by dbrandt           #+#    #+#             */
/*   Updated: 2022/10/30 13:33:19 by dbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char	*ft_parse_dict(char *dict)
{
	int	file_descriptor;
	int	size;

	// open and close file
	file_descriptor = open ("dict.txt", O_RDONLY);
	size = read (file_descriptor, dict, 350);
	dict[size] = '\0';
	close(file_descriptor);
	return (dict);
}
