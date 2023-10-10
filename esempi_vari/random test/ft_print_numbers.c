/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:07:45 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/19 11:14:05 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_num(int init)
{
	while (init < 58)
	{
		write(1, &init, 1);
		init ++;
	}
}

int	main(void)
{
	int	base;

	base = 57;
	ft_print_num(base);
	return (0);
}
