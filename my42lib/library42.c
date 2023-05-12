/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library42.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:43:36 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/21 08:43:38 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

void	ft_swap(int *a, int *b)
{
	int	bkt;

	bkt = *a;
	*a = *b;
	*b = bkt;
}

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		++n;
	write(1, str, n);
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != 0)
		++n;
	return (n);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		++i;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	max_pos;
	int	temp;
	int	i;

	max_pos = size;
	while (max_pos > 0)
	{
		i = 0;
		while (++i < max_pos)
		{
			if (tab[i - 1] > tab[i])
			{
				temp = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = temp;
			}
		}
		--max_pos;
	}
}

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

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!(('z' >= *str && *str >= 'a')
				|| ('Z' >= *str && *str >= 'A')))
			return (0);
		++str;
	}
	return (1);
}

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!('9' >= *str && *str >= '0'))
			return (0);
		++str;
	}
	return (1);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
