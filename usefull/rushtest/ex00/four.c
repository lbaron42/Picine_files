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

char	*four_col(char *col_top, char *col_bot, char matrix[4][4])
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if (col_top[j] == '4')
		{
			matrix[0][j] = '1';
			matrix[1][j] = '2';
			matrix[2][j] = '3';
			matrix[3][j] = '4';
		}
		if (col_top[j] == '1' && col_bot[j] == '4')
		{
			matrix[0][j] = '4';
			matrix[1][j] = '3';
			matrix[2][j] = '2';
			matrix[3][j] = '1';
		}
		j++;
	}
}

char	*four_row(char *row_top, char *row_bot, char matrix[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (row_top[i] == '4')
		{
			matrix[i][0] = '1';
			matrix[i][1] = '2';
			matrix[i][2] = '3';
			matrix[i][3] = '4';
		}
		if (row_top[i] == '1' && row_bot[i] == '4')
		{
			matrix[i][0] = '4';
			matrix[i][1] = '3';
			matrix[i][2] = '2';
			matrix[i][3] = '1';
		}
		i++;
	}
}
