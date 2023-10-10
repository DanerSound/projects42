/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:26:42 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/29 17:32:27 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	int	index;
	
	char	digit;
	index = 0;
	while(index <= 9)
	{
		digit = index + 48;
		write(1, &digit, 1);
		index++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return(0);
}
