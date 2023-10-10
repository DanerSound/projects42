/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:13:22 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/16 14:58:12 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
void	ft_print(int *nbr)
{
	char	d;
	char	u;

	d = *nbr / 10 + 48;
	u = *nbr % 10 + 48;
	write(1, &d, 1);
	write(1, &u, 1);
}

int	main(void)
{	
	int	tmp;
	int	*ptr;

	tmp = '0';
	ptr = &tmp;
	ft_print(ptr);
	ft_ft(ptr);
	ft_print(ptr);
}*/
