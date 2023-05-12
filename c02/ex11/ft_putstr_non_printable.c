/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:26:13 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/19 18:26:16 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

const char	g_lookup[] = "0123456789abcdef";

void	ft_putstr_non_printable(char *str)
{
	char	buf[3];

	buf[0] = '\\';
	while (*str != '\0')
	{
		if (32 <= *str && *str <= 126)
			write(1, str, 1);
		else
		{
			buf[1] = g_lookup[((unsigned char)*str) / 16];
			buf[2] = g_lookup[((unsigned char)*str) % 16];
			write(1, buf, 3);
		}
		++str;
	}
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
  char word[] = "Coucou\ntu vas bien ?";
  ft_putstr_non_printable(word);
  ft_putstr(word);
  return 0;
}
