/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:42:16 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/30 18:42:17 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	i;

	if (range == NULL)
		return (-1);
	if (min < max)
	{
		*range = malloc((max - min) * sizeof(int));
		if (*range == NULL)
			return (-1);
		i = 0;
		while (min < max)
			(*range)[i++] = min++;
		return (i);
	}
	return (0);
}

int main(void) {
  int a = 10;
  int b = 10;
  int c = b - a;
  int i = 0;
  int *ran; 
  ft_ultimate_range(&ran, a, b);
      printf("%d ", ran[0]);
  
  return 0;
}
