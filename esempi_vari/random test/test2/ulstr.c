/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:28:01 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/31 10:01:51 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	mixer(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
	{
		if (str[i]>='a' && str[i]<='z')
			str[i]-=32;
		else if (str[i]>='A' && str[i]<='Z')
				str[i]+=32;
		write(1,&str[i],1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc==2)
		mixer(argv[1]);
	write(1, "\n",1);
	return(0);
}
