/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <lbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:41:52 by lbaron            #+#    #+#             */
/*   Updated: 2023/01/20 16:03:52 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*arr;
	unsigned int	i;

	if (min < max)
	{
		arr = malloc((max - min) * sizeof(int));
		i = 0;
		if (arr)
			while (min < max)
				arr[i++] = min++;
		return (arr);
	}
	return (0);
}

int main(void) {
  int a = 2;
  int b = 10;
  int c = b - a;
  int i = 0;
  int *ran = ft_range(a, b);
  for(; i < c ; i++)
      printf("%d ", ran[i]);
  
  return 0;
}
