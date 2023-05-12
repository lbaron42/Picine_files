/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:42:38 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/30 18:42:41 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned int	joined_size(int size, char **strs, char *sep)
{
	unsigned int	total_size;
	unsigned int	offset;
	int				i;

	if (size < 1)
		return (1);
	i = 0;
	total_size = 0;
	while (i < size)
	{
		offset = 0;
		while (strs[i][offset] != '\0')
		{
			++total_size;
			++offset;
		}
		++i;
	}
	i = 0;
	while (*sep != '\0')
	{
		++sep;
		++i;
	}
	return (total_size + ((size - 1) * i) + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	unsigned int	offset;
	char			*ret;
	char			*itstr;
	char			*itsep;
	int				i;

	ret = malloc(joined_size(size, strs, sep));
	if (ret == NULL)
		return (NULL);
	i = -1;
	itstr = ret;
	while (++i < size)
	{
		offset = 0;
		while (strs[i][offset] != '\0')
			*itstr++ = strs[i][offset++];
		if (i < size - 1)
		{
			itsep = sep;
			while (*itsep != '\0')
				*itstr++ = *itsep++;
		}
	}
	*itstr = '\0';
	return (ret);
}

int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int		size;

	size = 0;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "I whant";
	strs[1] = "to be:";
	strs[2] = "Greatttttttttt";
	separator = "&";
	result = ft_strjoin(size, strs, separator);
	printf("%s\n", result);
	free(result);
}
