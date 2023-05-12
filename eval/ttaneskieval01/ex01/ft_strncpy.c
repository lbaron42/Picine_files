/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:45:43 by ttaneski          #+#    #+#             */
/*   Updated: 2022/10/20 13:20:04 by ttaneski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*  int main()
{
	int n;
	int i;
	char src[] = "copy this";
	char dest[100];

	char *dest_ptr = ft_strncpy(dest, src, 3);
	printf("     src: %s\n", src);
	printf("    dest: %s\n", dest);
	printf("dest_ptr: %s\n", dest_ptr);
	printf("    dest: %p\n", dest);
	printf("dest_ptr: %p\n", dest_ptr);
	printf("	   n: %d\n", n);
	printf("	   i: %d\n", i);

	return(0);

}  */