/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:20:34 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/19 18:20:38 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (*src != '\0' && ++i < n)
		dest[i] = *src++;
	while (++i < n)
		dest[i] = '\0';
	return (dest);
}

/*char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (*src != '\0' && ++i < n)
		dest[i] = *src++;
	while (++i < n)
		dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != 0)
		++n;
	return (n);
}

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		++n;
	write(1, str, n);
}

int main() 
{
  char source[] = "samm";
  char destiny[] = "luiz";
  ft_strncpy(destiny, source, 4);
  ft_putstr(destiny);
  

  return 0;
}*/
