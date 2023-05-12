/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pattern.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvomiero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:09:36 by mvomiero          #+#    #+#             */
/*   Updated: 2022/10/23 15:09:41 by mvomiero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/* void	char_assign(char **p)
{
	p[0] = "12430";
	p[1] = "23410";
	p[2] = "13420";
} */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] < 4)
	{
		dest[i] = src[i];
		i ++;
	}
	dest[4] = src[4] + 1;
	return (dest);
}

/* void	compare(char *stri, char *p[])
{
	char *temp;
	p[0] = "12430";
	p[1] = "23410";
	p[2] = "13420";

	int	i;
	int	j;

	i = 0;
	j = 0;
	temp = malloc(sizeof(char) * 5);
	while (j < 3)
	{
		while (i < 4)
		{
			if (stri[i] == p[j][i])
			{
				i = 0;
				while (i < 4)
				{
					temp[i] = p[j][i];
					i++;
				}
				temp[4] = p[j][4] + 1;
				temp[5] = '\n';
				p[j] = temp;
			}
				//p[j][4] = p[j][4] + 1;
			i++;
		}
		i = 0;
		j++;
	}
} */


void    compare(char *stri, char *p[])
{
    char *temp;
    p[0] = "12430";
    p[1] = "23410";
    p[2] = "13420";

    int    i;
    int    j;
    int    k;

    i = 0;
    j = 0;
    temp = malloc(sizeof(char) * 6);
    temp[4] = '0';
    while (j < 3)
    {
        while (i < 4)
        {
            if (stri[i] == p[j][i])
            {
                if (temp[4] != '1')
                    temp[4] = '1';
                else
                    temp[4] = temp[4] +1;
                k = 0;
                while (k < 4)
                {
                    temp[k] = p[j][k];
                    k++;
                }
                //temp[4] = p[j][4] + 1;
                temp[5] = '\0';
                p[j] = temp;
            }
                //p[j][4] = p[j][4] + 1;
            i++;
        }
        i = 0;
        j++;
    }
	printf("\n%s\n", p[0]);
	printf("\n%s\n", p[1]);
	printf("\n%s\n", p[2]);
}

char	*temp_new(char *temp, char **p, char *stri)
{
	int	j;

	j = 0;
	temp = p[j];
	while (j < 3)
	{
		if (p[j + 1][4] == temp[4] && temp[4] != '0')
		{
			stri[2] = '4';
			return (stri);
		}
		if (p[j + 1][4] > temp[4])
			temp = p[j +1];
		j++;
	}
	return (temp);
}

void	temp_to_output(char *temp, char *output)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		output[i] = temp[i];
		i++;
	}
}

char	*stro(char *stri)
{
	int		i;
	//int		j;
	char	*temp;
	char	*output;
	char	**p;
	//p = malloc(sizeof(char*) * 3);

	i = 0;
	temp = malloc(5 * sizeof(char));
	output = malloc(4 * sizeof(char));
	p = malloc(sizeof(char*) * 3);
	while (i < 3)
	{
		p[i] = malloc(sizeof(char) * 5);
		i++;
	}
	/* p[0] = "12430";
	p[1] = "23410";
	p[2] = "13420"; */

	//printf("\n%s\n", p[1]);

	//char_assign(p);
	//i = 0;
	//j = 0;
	compare(stri, p);
	//printf("\n%s\n", p[1]);

	temp = temp_new(temp, p, stri);
	if (temp[4] == '0')
	{
		stri[2] = '4';
		return (stri);
	}
	else
	{
		temp_to_output(temp, output);
		return (output);
	}
	free(temp);
	free(output);
	free(p);
}

/* int	main (void)
{
	char input[4]="2300";
	
	printf("\n%s\n", stro(input));
} */
