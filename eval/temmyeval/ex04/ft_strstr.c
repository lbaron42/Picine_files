/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:33:14 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/21 08:33:16 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

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

int main(void) {
  char haystack[] = "Episode V, A NEW H0PE It is a period NEW of civil war";
  char neadle[] = "";

  
  printf("%s\n", ft_strstr(haystack, neadle));
  return 0;
}
