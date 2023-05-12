/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FullInputAndConditions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:26:00 by lbaron            #+#    #+#             */
/*   Updated: 2022/10/23 17:26:21 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		++n;
	write(1, str, n);
}

long my_atoi(const char* S)
{
    long num = 0;
 
    int i = 0;
 
    while (S[i] && (S[i] >= '0' && S[i] <= '9'))
    {
        num = num * 10 + (S[i] - '0');
        i++;
    }
 
    return num;
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != 0)
		++n;
	return (n);
}

int	is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!('9' >= *str && *str >= '0'))
			return (0);
		++str;
	}
	return (1);
}

int	inspace(char *str)
{
	while (*str != '\0')
	{
		if (*str != ' ')
			return (0);
		++str;
	}
	return (1);
}


int main(int argc, char **argv) 
{   
    int col_top[4];
    int col_bot[4];
    int row_top[4];
    int row_bot[4];
  
    col_top[0] = my_atoi(&argv[1][0]);
    col_top[1] = my_atoi(&argv[1][2]);
    col_top[2] = my_atoi(&argv[1][4]);
    col_top[3] = my_atoi(&argv[1][6]);

    col_bot[0] = my_atoi(&argv[1][8]);
    col_bot[1] = my_atoi(&argv[1][10]);
    col_bot[2] = my_atoi(&argv[1][12]);
    col_bot[3] = my_atoi(&argv[1][14]);

    row_top[0] = my_atoi(&argv[1][16]);
    row_top[1] = my_atoi(&argv[1][18]);
    row_top[2] = my_atoi(&argv[1][20]);
    row_top[3] = my_atoi(&argv[1][22]);

    row_bot[0] = my_atoi(&argv[1][24]);
    row_bot[1] = my_atoi(&argv[1][26]);
    row_bot[2] = my_atoi(&argv[1][28]);
    row_bot[3] = my_atoi(&argv[1][30]);

      int s; 
      int i; 
      int a;
     
      i = 0;
                                                                             
      char *nums = malloc(sizeof(char) * 16);
      char *spaces = malloc(sizeof(char) * 15);
  
       s = 1;
       i = 0;
       a = 0;
      while(i <= 16)
      {  
        spaces[i] = argv[1][s];
        nums[i] = argv[1][a];
        s = s + 2;
        a = a + 2;
        i++;
      }
      int n = is_numeric(nums);
      int t = inspace(spaces);
      int numslen = ft_strlen(nums);
      int spacelen = ft_strlen(spaces);
       
       if(n == 1 || t == 0 || numslen != 17 || spacelen != 15)
       {
         ft_putstr("Error\n");
       }
       else if  ((col_top[0] + col_bot[0] > 5) || (col_top[0] + col_bot[0] < 3)
           || (col_top[1] + col_bot[1] > 5) || (col_top[1] + col_bot[1] < 3)
           || (col_top[2] + col_bot[2] > 5) || (col_top[2] + col_bot[2] < 3)
           || (col_top[3] + col_bot[3] > 5) || (col_top[3] + col_bot[3] < 3)
           || (row_top[0] + row_bot[0] > 5) || (row_top[0] + row_bot[0] < 3)
           || (row_top[1] + row_bot[1] > 5) || (row_top[1] + row_bot[1] < 3)
           || (row_top[2] + row_bot[2] > 5) || (row_top[2] + row_bot[2] < 3)
           || (row_top[3] + row_bot[3] > 5) || (row_top[3] + row_bot[3] < 3)
           || (argc != 2 ))
        {
           ft_putstr("Error\n");
        }
        else if ((col_top[0] > 4 || col_top[0] <= 0) 
                || (col_top[1] > 4 || col_top[1] <= 0) 
                || (col_top[2] > 4 || col_top[2] <= 0)
                || (col_top[3] > 4 || col_top[3] <= 0)
                || (col_bot[0] > 4 || col_bot[0] <= 0)
                || (col_bot[1] > 4 || col_bot[1] <= 0)
                || (col_bot[2] > 4 || col_bot[2] <= 0)
                || (col_bot[3] > 4 || col_bot[3] <= 0)
                || (row_top[0] > 4 || row_top[0] <= 0)
                || (row_top[1] > 4 || row_top[1] <= 0)
                || (row_top[2] > 4 || row_top[2] <= 0)  
                || (row_top[3] > 4 || row_top[3] <= 0)
                || (row_bot[0] > 4 || row_bot[0] <= 0)
                || (row_bot[1] > 4 || row_bot[1] <= 0)
                || (row_bot[2] > 4 || row_bot[2] <= 0)
                || (row_bot[3] > 4 || row_bot[3] <= 0))  
        {
          ft_putstr("Error\n");
        } 
        else
        {
       int matrix[4][4] =	{
		    {0, 0, 0, 0},
		    {0, 0, 0, 0},
		    {0, 0, 0, 0},
		    {0, 0, 0, 0},
	      };

    
	  ft_putstr("         c  c  c  c\n");
	  ft_putstr("         0  1  2  3\n");
          ft_putstr("         ");
          ft_putnbr(col_top[0]);
          ft_putstr("  ");
          ft_putnbr(col_top[1]);
          ft_putstr("  ");
          ft_putnbr(col_top[2]);
          ft_putstr("  ");
          ft_putnbr(col_top[3]);
          ft_putstr("\n");
	  ft_putstr("         |  |  |  |\n");
          ft_putstr("r 0 ");
          ft_putnbr(row_top[0]);
          ft_putstr(" -- ");
          ft_putnbr(matrix[0][0]);
          ft_putstr("  ");
          ft_putnbr(matrix[0][1]);
          ft_putstr("  ");
          ft_putnbr(matrix[0][2]);
          ft_putstr("  ");
          ft_putnbr(matrix[0][3]);
          ft_putstr(" -- ");
          ft_putnbr(row_bot[0]);
          ft_putstr("\n");
          ft_putstr("r 1 ");
          ft_putnbr(row_top[1]);
          ft_putstr(" -- ");
          ft_putnbr(matrix[1][0]);
          ft_putstr("  ");
          ft_putnbr(matrix[1][1]);
          ft_putstr("  ");
          ft_putnbr(matrix[1][2]);
          ft_putstr("  ");
          ft_putnbr(matrix[1][3]);
          ft_putstr(" -- ");
          ft_putnbr(row_bot[1]);
          ft_putstr("\n");
          ft_putstr("r 2 ");
          ft_putnbr(row_top[2]);
          ft_putstr(" -- ");
          ft_putnbr(matrix[2][0]);
          ft_putstr("  ");
          ft_putnbr(matrix[2][1]);
          ft_putstr("  ");
          ft_putnbr(matrix[2][2]);
          ft_putstr("  ");
          ft_putnbr(matrix[2][3]);
          ft_putstr(" -- ");
          ft_putnbr(row_bot[2]);
          ft_putstr("\n");
          ft_putstr("r 3 ");
          ft_putnbr(row_top[3]);
          ft_putstr(" -- ");
          ft_putnbr(matrix[3][0]);
          ft_putstr("  ");
          ft_putnbr(matrix[3][1]);
          ft_putstr("  ");
          ft_putnbr(matrix[3][2]);
          ft_putstr("  ");
          ft_putnbr(matrix[3][3]);
          ft_putstr(" -- ");
          ft_putnbr(row_bot[3]);
          ft_putstr("\n");
          ft_putstr("         |  |  |  |\n");
          ft_putstr("         ");
          ft_putnbr(col_bot[0]);
          ft_putstr("  ");
          ft_putnbr(col_bot[1]);
          ft_putstr("  ");
          ft_putnbr(col_bot[2]);
          ft_putstr("  ");
          ft_putnbr(col_bot[3]);
          ft_putstr("\n");
        }
  free(nums);
  free(spaces);
  }
