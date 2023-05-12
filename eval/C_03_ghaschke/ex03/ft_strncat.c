/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:32:43 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/21 08:32:46 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*ret;
	unsigned int	i;

	i = 0;
	ret = dest;
	while (*dest != '\0')
		++dest;
	while (*src != '\0' && i < nb)
	{
		*dest++ = *src++;
		++i;
	}
	*dest = '\0';
	return (ret);
}

int main(void) 
{
  char a[] = "whad";
  char b[] = "w";

  printf("%s\n", ft_strncat(a, b, 4));
  return 0;
}
