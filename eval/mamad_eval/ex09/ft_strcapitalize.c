/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:25:21 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/19 18:25:23 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

#define TRUE  1
#define FALSE 0

char	*ft_strcapitalize(char *str)
{
	char	*it;
	int		should_cap;

	it = str;
	should_cap = TRUE;
	while (*it != '\0')
	{
		if (('z' >= *it && *it >= 'a')
			|| ('Z' >= *it && *it >= 'A')
			|| ('9' >= *it && *it >= '0'))
		{
			if (should_cap && 'a' <= *it && *it <= 'z')
				*it = *it - 'a' + 'A';
			if ((!should_cap) && 'A' <= *it && *it <= 'Z')
				*it = *it - 'A' + 'a';
			should_cap = 0;
		}
		else
		{
			should_cap = 1;
		}
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
  char word[] = "HONEY, I SHRUNK THE KIDS";
  ft_strcapitalize(word);
  ft_putstr(word);
  
}*/
