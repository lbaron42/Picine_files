/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:30:33 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/21 08:30:37 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && i < n - 1)
	{
		++s1;
		++s2;
		++i;
	}
	return (((unsigned char)*s1) - ((unsigned char)*s2));
}

int main(void) 
{
  char a[] = "wha2";
  char b[] = "w1h1";

  printf("%d", ft_strncmp(a, b, 2));
  return 0;
}
