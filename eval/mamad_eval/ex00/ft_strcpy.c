/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <lbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:19:30 by lbaron            #+#    #+#             */
/*   Updated: 2022/11/02 12:33:54 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*ret;

	ret = dest;
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (ret);
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
  char source[] = "luiz";
  char destiny[] = "sammy";
  ft_putstr(source);
  ft_putstr(", ");
  ft_putstr(destiny);
  ft_strcpy(destiny, source);
  ft_putstr("\n");
  ft_putstr(source);
  ft_putstr(", ");
  ft_putstr(destiny);
  

  return 0;
}
