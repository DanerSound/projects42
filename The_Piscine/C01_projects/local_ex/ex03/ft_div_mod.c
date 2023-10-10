/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:19:58 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/17 11:25:22 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	mydiv;
	int	mymod;
	int	*d;
	int	*m;

	d = &mydiv;
	m = &mymod;
	ft_div_mod(20, 5, d, m);
	printf("risultati %d %d", *d,*m);
}*/
