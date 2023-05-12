
#include <stdlib.h>
#include <unistd.h>
#include "rushLib.h"


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
		    {0, 0, 0, 0}
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
          ft_putstr("r 0 ");
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
          ft_putstr("r 0 ");
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
          ft_putstr("r 0 ");
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
