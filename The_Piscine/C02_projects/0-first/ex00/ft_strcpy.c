/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:48:30 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/18 16:01:14 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index ++;
	}
	dest[index] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	init[] = {"Ciao Mondo"};
	char	dest[] = {"hola"};

	printf("prima copia: %s\n", dest);
	printf("dopo copia: %s", ft_strcpy(dest,init));
	return (0);
}*/