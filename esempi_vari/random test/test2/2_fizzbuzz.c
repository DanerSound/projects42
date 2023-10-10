/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:23:21 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/29 14:14:39 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_writenb(int	nb)
{
	char	d;
	char	u;

	d = (nb / 10) + 48;
	u = (nb % 10) + 48;
	if ( d == '0')
	{
	}
	else
		write(1, &d, 1);
		
	write(1, &u, 1);
	write(1,"\n", 1);
}

void	function()
{
	int	i;

	i = 1;
	while (i < 101)
	{
		if((i % 3)==0 && (i%5)==0)
		{
			write(1,"FizzBuzz\n", 9);
			i++;
		}
		else if (i%3 == 0)
		{
			write(1,"Fizz\n", 5);
			i++;
		}
		else if(i%5 == 0)
		{
			write(1,"Buzz\n", 5);
			i++;
		}
		else{
			ft_writenb(i);
			i++;
		}
	}
}

int	main(void)
{
	function();
	return(0);
}

