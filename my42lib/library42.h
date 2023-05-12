/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library42.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:43:50 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/21 08:43:53 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARI42_H_INCLUDED
#define LIBRARI42_H_INCLUDED

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int	ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);
char	*ft_strcpy(char *dest, char *src);
int	ft_str_is_alpha(char *str);
int	ft_str_is_numeric(char *str);
char	*ft_strupcase(char *str);
char	*ft_strcapitalize(char *str);

#endif // LIBRARI42_H_INCLUDED
