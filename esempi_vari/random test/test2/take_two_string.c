/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_two_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:40:55 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/30 15:48:50 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	delete_occ(char curr,char *second)
{
	int i;
	
	i = 0;
	while(second[i])
	{
		if( second[i] == curr )
			second[i] = '0';
		i++;
	}
}

void	ft_printer(char l)
{
	write(1, &l, 1);
}

int	search_it(char f, char *str)
{	
	int res = 0;
	int i;
	i = 0;
	while(str[i])
	{
		if (str[i]==f)
		{
			res = 1;
			break;
		}
		else
			i++;
	}
	return (res);
}

int	main(int argc, char *argv[])
{	
	//int	k;
	int	i;
	int	j;
	int	found;
	
//	k = 0;
	found = 1;
	i = 0;
	j = 0;
	if ( argc == 3 )
	{
		while(argv[1][i]!='\0' && argv[2][j]!='\0')
		{	
			found = search_it(argv[1][i],argv[2]);
			if(found)
			{
				while(argv[1][i]!=argv[2][j])
					j++;
				ft_printer(argv[1][i]);
				delete_occ(argv[1][i], argv[2]);
				i++;
				j = 0;
			}
			else
			{
				i++;
				j=0;
			}
		}
		/*
		while (argv[2][k]!='\0')
		{	
			printf("%c",argv[2][k]);
			k++;
		}*/
		}
	
	write(1,"\n",1);
	return(0);
}
