/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 22:45:55 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/25 23:13:33 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>

int	ft_myleng_index(char *str)
{
	int index = 0;
	while(str[index] != '\0')
	{
		index++;
	}
	return (index);
}

int	ft_mylen_str(char *str)
{
	int len = 0;
	while(*str !='\0')
	{
		len++;
		str++;
	}
	return (len);
}

int	main(int argc, char *argv[])
{
	printf("%s\n",argv[1]);

	printf("%d\n",ft_myleng_index(argv[1]));	
	printf("%d\n",ft_mylen_str(argv[1]));
	return(0);
}
