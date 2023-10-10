/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:50:14 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/24 11:57:36 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_str_lenght(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{	
	unsigned int	index;

	index = 0;
	if (size <= 0)
	{
		return (ft_str_lenght(src));
	}
	while (index < size - 1)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (ft_str_lenght(src));
}
/*
int	main(void)
{
	char	my_scr[] = "ciao mondo";
	char	my_dest[100];

	printf(" spero davvero funzioni: %d\n",ft_strlcpy(my_dest,my_scr,5));
	printf(" Sorgente %s\n", my_scr);
	printf(" Destinazione %s\n", my_dest);

	return(0);
}*/