/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possibilities.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarbois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:23:31 by mdarbois          #+#    #+#             */
/*   Updated: 2022/10/22 14:33:19 by mdarbois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

if (col_top[i] = 4 || (col_top)[i+4] = 4 || row_top[i] = 4 || row_top[i+4] = 4)
possibility[4] = {1,2,3,4};

if ((col_top[j] = 3 && (col_top)[j+4] = 2) || (row_top[i] = 3 && row_top[i+4] = 2)
{ 
	//pattern: pos3=4
possibility_1[4] = {1,2,4,3}
possibility_2[4] = {2,3,4,1}
possibility_3[4] = {1,3,4,2}
}
if ((col_top[j] = 3 && (col_top)[j+4] = 1) || (row_top[i] = 3 && row_top[i+4] = 1)
{ 
	//pattern: pos1=2 pos4=4
possibility_1[4] = {2,1,3,4}
possibility_2[4] = {2,3,1,4}
}
if ((col_top[j] = 2 && (col_top)[j+4] = 3) || (row_top[i] = 2 && row_top[i+4] = 3)
{ 
	//pattern: pos2=4 
possibility_1[4] = {1,4,3,2}
possibility_2[4] = {3,4,2,1}
possibility_3[4] = {2,4,3,1}
}
if ((col_top[j] = 2 && (col_top)[j+4] = 2) || (row_top[i] = 2 && row_top[i+4] = 2)
{ 
possibility_1[4] = {3,4,1,2}
possibility_2[4] = {1,4,2,3}
possibility_3[4] = {2,4,1,3}
possibility_4[4] = {2,1,4,3}
possibility_5[4] = {3,2,4,1}
possibility_6[4] = {3,1,4,2}
}
if ((col_top[j] = 2 && (col_top)[j+4] = 1) || (row_top[i] = 2 && row_top[i+4] = 1)
{ 
	//pattern: pos1 = 3 && pos4=4
possibility_1[4] = {3,2,1,4}
possibility_2[4] = {3,1,2,4}
}
if ((col_top[j] = 1 && (col_top)[j+4] = 4) || (row_top[i] = 1 && row_top[i+4] = 4)
possibility_1[4] = {4,3,2,1}

if ((col_top[j] = 1 && (col_top)[j+4] = 2) || (row_top[i] = 1 && row_top[i+4] = 2)
{
	//pattern : pos1=4  
possibility_1[4] = {4,2,3,1}
possibility_2[4] = {4,2,1,3}
possibility_3[4] = {4,1,2,3}
}
if ((col_top[j] = 1 && (col_top)[j+4] = 3) || (row_top[i] = 1 && row_top[i+4] = 3)
{
	//pattern: pos1=4 and pos4=2
possibility_1[4] = {4,3,1,2}
possibility_2[4] = {4,1,3,2}
}
