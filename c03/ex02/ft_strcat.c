/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:31:48 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/21 08:31:51 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*ret;

	ret = dest;
	while (*dest != '\0')
		++dest;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (ret);
}

/*int main(void) 
{
  char a[] = "wha";
  char b[] = "whh1";

  printf("%s\n", ft_strcat(a, b));
  return 0;
}*/
