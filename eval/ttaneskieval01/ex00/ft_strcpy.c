/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:38:10 by ttaneski          #+#    #+#             */
/*   Updated: 2022/10/20 13:19:19 by ttaneski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
int main()
{
    char src[] = "copy this";
    char dest[100];

    char *dest_ptr = ft_strcpy(dest, src);
    printf("     src: %s\n", src);
    printf("    dest: %s\n", dest);
    printf("dest_ptr: %s\n", dest_ptr);
    printf("    dest: %p\n", dest);
    printf("dest_ptr: %p\n", dest_ptr);

    return(0);

}
