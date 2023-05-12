/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_word.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandt <dbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:08:27 by dbrandt           #+#    #+#             */
/*   Updated: 2022/10/30 13:32:54 by dbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	fn_find_firstspace(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j != 1)
	{
		if (str[i] == ' ')
		{
			j++;
		}
		i++;
	}
	return (i);
}

int	fn_find_secondspace(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j != 2)
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\v')
		{
			j++;
		}
		i++;
	}
	return (i - 1);
}

char	*fn_isolate_word(char *str, int x, int y)
{
	int		i;
	int		k;
	char	*newstr;

	newstr = (char *)malloc(y - x);
	i = 0;
	k = 0;
	while (i < (y - x))
	{
		newstr[i] = str[x + k];
		k++;
		i++;
	}
	return (newstr);
	free(newstr);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*itstr;
	char	*itfind;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		itstr = str;
		itfind = to_find;
		while (*itstr == *itfind && *itfind != '\0' && *itstr != '\0')
		{
			++itstr;
			++itfind;
		}
		if (*itfind == '\0')
			return (str);
		++str;
	}
	return (0);
}

char	*ft_get_word(char *dictstr, char *avstr)
{
	int		indxs;
	int		indxe;
	char	*str1;
	char	*word;

	str1 = ft_strstr(dictstr, avstr);
	indxs = fn_find_firstspace(str1);
	indxe = fn_find_secondspace(str1);
	word = fn_isolate_word(str1, indxs, indxe);
	return (word);
}
