/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:06:03 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/17 13:54:47 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{	
	while (*str != '\0')
	{
		ft_print(*str);
		str++;
	}
}
/*
int	main(void)
{
	char	mystr[] = {"hello world"};

	ft_putstr(mystr);
	return (0);
}*/
