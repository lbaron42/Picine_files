/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:41:26 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/30 18:41:28 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char			*dest;
	unsigned int	n;

	n = 0;
	while (src[n] != '\0')
		++n;
	dest = malloc(n + 1);
	if (dest != NULL)
	{
		dest[n] = '\0';
		while (n--)
			dest[n] = src[n];
	}
	return (dest);
}

int main(void) {
  char *b = "lala";
  
  printf("This is the original: %s\nThis is the copy: %s\nThis is the adress of the original:%p\nThisis the adress of the copy: %p\n",b, ft_strdup(b), b, ft_strdup(b));
  return 0;
}
