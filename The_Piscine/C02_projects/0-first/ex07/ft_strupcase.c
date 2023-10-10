/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:08:57 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/23 14:41:11 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<unistd.h>

char	*ft_strupcase(char *str)
{
	char	*tmp;

	*tmp = str;
	while (*str != '\0')
	{
		if (*str > 'a' && *str < 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (tmp);
}
/*int	main(void)
{   
    	char	word[] = "test";
	printf(" stringa UPPER: %s", ft_str_is_printable(word));
	return (0);
}*/
