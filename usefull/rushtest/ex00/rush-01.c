/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarbois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:45:08 by mdarbois          #+#    #+#             */
/*   Updated: 2022/10/23 17:45:09 by mdarbois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "four.c"
/* #include "possibilities.c"
#include "pattern.c" */
#include <unistd.h>
/* #include "input_output.c" */

int	main(void)
{
	char matrix[4][4] =	{
		{'0', '0', '0', '0'},
		{'0', '0', '0', '0'},
		{'0', '0', '0', '0'},
		{'0', '0', '0', '0'}
	};

// step input from users and set the arrays ->file "input_output"

	char	col_top[4] = "4321";
	char	col_bot[4] = "1222";

	char	row_top[4] = "4321";
	char	row_bot[4] = "1222";

// call the four functions -> file "four"

four_col(col_top,col_bot,matrix);
four_row(row_top,row_bot,matrix);

// call the conditions functions -> file "possibilities"
//conditions(col_top, row_top) 

// pattern filling file "pattern"

// print out the result
	printf("      c  c  c  c\n");
	printf("      0  1  2  3\n");
	printf("      |  |  |  |\n");
	printf("r 0 --%c  %c  %c  %c\n", matrix[0][0], matrix[0][1], matrix[0][2], matrix[0][3]);
	printf("r 1 --%c  %c  %c  %c\n", matrix[1][0], matrix[1][1], matrix[1][2], matrix[1][3]);
	printf("r 2 --%c  %c  %c  %c\n", matrix[2][0], matrix[2][1], matrix[2][2], matrix[2][3]);
	printf("r 3 --%c  %c  %c  %c\n", matrix[3][0], matrix[3][1], matrix[3][2], matrix[3][3]);
return (0);
}