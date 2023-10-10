/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:24:48 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/31 15:29:49 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printer(char c,int times)
{
	int i=times;
	while(i>0)
	{
		write(1,&c,1);
		i--;
	}
}


void	double_printer(char *str)
{
	int i = 0;
	int times;
	while (str[i])
	{
		if (str[i]>='a' && str[i]<='z')
		{
			times = str[i]-96;
			printer(str[i],times);	
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			times = str[i]-64;
			printer(str[i],times);
		}
		times = 0;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		write(1,"\n",1);
		return(0);
	}
	double_printer(argv[1]);
	write(1, "\n",1);
	return(0);
}
