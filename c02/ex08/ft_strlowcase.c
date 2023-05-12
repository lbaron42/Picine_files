/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:24:45 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/19 18:24:50 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*it;

	it = str;
	while (*it != '\0')
	{
		if ('A' <= *it && *it <= 'Z')
			*it = *it - 'A' + 'a';
		++it;
	}
	return (str);
}
/*void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		++n;
	write(1, str, n);
}

int main()
{
  char word[] = "HONEY, I SHRUNK THR KIDS";
  ft_strlowcase(word);
  ft_putstr(word);
 
}*/
