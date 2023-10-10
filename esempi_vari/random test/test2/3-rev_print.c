/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:20:57 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/29 18:53:51 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char *ft_rev_print (char *str)
{	
	int	i;
	int	len;
	char	tmp;

	len = 0;
	while (str[len])
		len = len + 1;
	
	i = 0;
	len = len - 1;
	while (len > i)
	{	
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	printf("%s",str);
	return (str); 
}

int	main(int argc, char  *argv[])
{
	char	*tmp2;

	tmp2 = ft_rev_print(argv[1]);
	//printf("%s",tmp2);
	return(0);
}
