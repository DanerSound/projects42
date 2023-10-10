/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:27:49 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/17 11:49:23 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}
/*
int	main(void)
{
	int	mydiv;
	int	mymod;
	int	*d;
	int	*m;

	mydiv = 12;
	mymod = 3;
	d = &mydiv;
	m = &mymod;
	ft_ultimate_div_mod(d, m);
	printf("risultati %d %d", mydiv, mymod);
}*/
