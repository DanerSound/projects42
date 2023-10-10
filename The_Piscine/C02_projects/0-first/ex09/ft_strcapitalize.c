/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:57:06 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/24 11:39:56 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = -1;
	a = 1;
	while (str[++i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (a == 1 && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				a = 0;
			}
			else if (a == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			else
				a = 0;
		}
		else
			a = 1;
	}
	return (str);
}
/*
int	main(void)
{   
    char	test[] = {"ab,cd 1ab+cd"};
	
	//ft_strcapitalize(test);
	
	printf("\n %s", test);
	printf("\n %s", ft_strcapitalize(test));
	return (0);
}*/
