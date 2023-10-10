/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upper_lower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 19:37:13 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/29 16:38:29 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// ricorda che argc e' i numeri del elemti del programma, se vuoi stampare l'ultimo devi prendere argc-1
#include<stdio.h>
#include<unistd.h>
void	ft_printer (char *str)
{	
	int index;

	index = 0;
	while(str[index])
	{
		write(1, &str[index], 1);
		index++;
	}
}
char	*ft_mixed(char *str)
{
	int index;

	index = 0;
	while(str[index] != '\0')
	{	
		if(str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32 ;
			index++;
			
		} else if(str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] += 32 ;
			index++;
		}
		else 
		{
			index++;
		}
	}
	return (str);
}


int	main(int argc, char *argv[])
{

	//printf("%s",ft_mixed(argv[1]));
	ft_printer(ft_mixed(argv[1]));

	return(0);
}
