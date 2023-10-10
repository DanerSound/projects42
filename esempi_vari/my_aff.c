/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_aff.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 21:51:25 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/25 22:02:26 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	main(int argc, char *argv[])
{
	int i=0;

	while (argv[i]!='\0')
	{
	printf("%s\n", argv[i] );
	i++;
	}
	printf("%d\n",argc);

	
	if(argc!=1)
	{
		write(1,"a",1);
		write(1,"\n",1);
	}
	
	write(1,"g",1);
	return (0);
}
