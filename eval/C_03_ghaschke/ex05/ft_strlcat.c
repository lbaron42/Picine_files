/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:33:46 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/21 08:33:49 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_attempt;
	int				should_null_terminate;

	size_attempt = 0;
	while (*dest != '\0' && size_attempt < size)
		++dest;
	++size_attempt;
	should_null_terminate = size_attempt < size;
	while (*src != '\0' && size_attempt < size)
	{
		*dest++ = *src++;
		++size_attempt;
	}
	if (size_attempt == size)
		--dest;
	if (should_null_terminate)
		*dest = '\0';
	while (*src != '\0')
		++src;
	++size_attempt;
	return (size_attempt);
}

int main(void) 
{
  char a[] = "whiljoyvo";
  char b[] = "whh1uytfyit";

  printf("%d\n", ft_strlcat(a, b, 5));
  printf("%s\n", a);
    printf("%s\n", b);
    //a[9] = "whiljoyvo";
    //b[11] = "whh1uytfyit";
   //printf("%d\n", strlcat(a, b, 1));
  return 0;
}
