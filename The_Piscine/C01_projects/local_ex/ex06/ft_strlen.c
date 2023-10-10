/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:57:20 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/17 14:18:55 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

int	ft_strlen(char *str)
{	
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}
/*
int	main(void)
{	
	char	mystr[] = {"hello world!"};
	int	result;

	result = ft_strlen(mystr);
	printf(" lunghezza : %d", result);
	return (0);
}*/
