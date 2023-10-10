/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:08:41 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/31 11:14:40 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int	ft_atoi(char *str)
{
	int result;
	int index;
	int sign = 1;
	int ds = 1;
	
	index=0;
	result =0;
	while (str[index] == 32 || (str[index] >= 9 && str[index]<=13))
		index++;
	while (str[index]=='+' || str[index] =='-')
	{	
		if (ds == 2)
		{
			return (0);
		}
		else if (str[index]=='-')
			{
				sign=-1;
				ds++;
			}
		index++;
	}

	while (str[index])
	{
		while (str[index]!= 32 && str[index]!= '\0' && str[index]>= 48 && str[index]<= 57)
		{
			if (str[index]>='a' && str[index]<='z'||str[index]>= 'A'&& str[index]<='Z')	
				break;
			else	
			{	
				result = result * 10 + (str[index] - '0');
				index++;
			}	
		}
		break;
	}
	return (result * sign);
}

int	main(int argc, char *argv[])
{
	(void)argc;
	printf("  my atoi %d \n",ft_atoi(argv[1]));
	printf("atoi vero %d",atoi(argv[1]));
	return(0);
}
