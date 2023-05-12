/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushLib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 19:45:42 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/23 19:45:44 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSHLIBRARY_H_INCLUDED
#define RUSHLIBRARY_H_INCLUDED

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
long	my_atoi(const char* S);
int	is_numeric(char *str);

#endif // RUSHLIBRARY_H_INCLUDED
