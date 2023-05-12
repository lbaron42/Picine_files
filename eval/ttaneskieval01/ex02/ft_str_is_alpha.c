/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:01:02 by ttaneski          #+#    #+#             */
/*   Updated: 2022/10/19 20:35:23 by ttaneski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0' )
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/* int main()
{
    char *str = "123?>(@*#45";
    int i = 0;
    
    if(str[i] == '\0')
    {
        return(1);
    }
    while(str[i] != '\0')
    {
        if(!(str[i] >= 'a' && str[i] <= 'z') 
        && (!(str[i] >= 'A' && str[i] <= 'Z')))
        {
            printf("%c", str[i]);
            i++;   
        }
        else
        {
            return(1);
        }
    }
    printf("\n");
    return(0);
} */